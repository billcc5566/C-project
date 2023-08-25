#include<stdio.h>
#include<math.h> 
int main(){
  int n,m,result=0,i,j,x,y,start,sum=0;
  printf("½Ð¿é¤Jn»Pm\n");
  scanf("%d%d",&n,&m);
  int a[n][m];
  int b[n*m][2];
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		scanf("%d",&a[i][j]);
	  }
  }
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  	start=a[i][j];
	 for(x=0;x<n;x++){
  	for(y=0;y<m;y++){
  	if(abs(x-i)+abs(y-j)<=start){
  	sum=sum+a[x][y];	
	  }  	
  }}
  if(sum%10==start){
    result++;
    b[result-1][0]=i;
    b[result-1][1]=j;
  }
  sum=0;
  }}
  printf("%d\n",result);
  for(i=0;i<result;i++){
  	printf("%d %d\n",b[i][0],b[i][1]);
  }
} 
