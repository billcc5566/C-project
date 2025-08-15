#include<stdio.h>
int main(){
  int n,m,i,j,min=1000,x0,y0,can=1,sum=0;
  int x,y;
  scanf("%d %d",&n,&m);
  int a[n+2][m+2];
  for(i=0;i<n+2;i++){
  	for(j=0;j<m+2;j++){
  		a[i][j]=-1;
	  }
  }
  for(i=1;i<n+1;i++){
  	for(j=1;j<m+1;j++){
  		scanf("%d",&a[i][j]);
  		if(a[i][j]<min){
  			min=a[i][j];
  			x=i;
  			y=j;
		  }
	  }
  }
  sum+=min;
  int d[4][2]={  /*上下左右*/ 
    -1,0,
     1,0,
     0,-1,
     0,1
  };
  while(can==1){
  can=0;
  min=1000;
  x0=x;
  y0=y;
  a[x][y]=-1;  /*紀錄走過*/	
  for(i=0;i<4;i++){
  	if(a[x0+d[i][0]][y0+d[i][1]]!=-1 && a[x0+d[i][0]][y0+d[i][1]]<min){
  		min=a[x0+d[i][0]][y0+d[i][1]];
  		x=x0+d[i][0];
  		y=y0+d[i][1];
	  }
  }
  sum+=min; 
  for(i=0;i<4;i++){
  	if(a[x+d[i][0]][y+d[i][1]]!=-1)can=1;
  }	
  }
  printf("%d",sum);
  return 0;
} 
