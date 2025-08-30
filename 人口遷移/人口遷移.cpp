#include<stdio.h>
int main(){
 int R,C,k,m,i,j,y,x,num=0;
 int min=1000,max=0;
 scanf("%d %d %d %d",&R,&C,&k,&m);
 int a[R+2][C+2],b[R+2][C+2],c[R+2][C+2];
  for(i=0;i<R+2;i++){
 	for(j=0;j<C+2;j++){
 		a[i][j]=-1;
 		b[i][j]=-1;
 		c[i][j]=0;
	 }
 }
 for(i=1;i<R+1;i++){
 	for(j=1;j<C+1;j++){
 		scanf("%d",&b[i][j]);
	 }
 }
 int d[4][2]={-1,0,1,0,0,-1,0,1};
 for(y=m;y>0;y--){
   for(i=1;i<R+1;i++){
 	for(j=1;j<C+1;j++){
 		a[i][j]=b[i][j];  /*a舊b新c為該加的*/ 
 		c[i][j]=0;
 		if(b[i][j]!=-1)c[i][j]=b[i][j]/k;
	 }
   }
   for(i=1;i<R+1;i++){
 	for(j=1;j<C+1;j++){
 	  num=0;
      for(x=0;x<4;x++){  /*看上下左右相鄰城市數*/ 
      	if(a[i+d[x][0]][j+d[x][1]]!=-1 && a[i][j]!=-1){
		   num++; 
		   b[i][j]+=c[i+d[x][0]][j+d[x][1]];
		   }
	  }
	  if(a[i][j]!=-1)b[i][j]=b[i][j]-num*(a[i][j]/k);
	 }
   }
 }
    for(i=1;i<R+1;i++){
 	for(j=1;j<C+1;j++){
 	 printf("%d\n",b[i][j]);	
     if(b[i][j]<min && b[i][j]!=-1)min=b[i][j];
     if(b[i][j]>max)max=b[i][j];
	 }
   }
   printf("%d\n%d",min,max);
 return 0;
} 
