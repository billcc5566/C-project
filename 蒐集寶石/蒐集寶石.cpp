#include<stdio.h>
int main(){
 int m,n,k,r,c,i,j,step=0,score=0,r2,c2,sum=0;
 scanf("%d %d %d %d %d",&m,&n,&k,&r,&c);
 int a[m][n];
 for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
 		scanf("%d",&a[i][j]);
	 }
 }
 int dir[4][2]={
 	0,1,/*¥k¤U¥ª¤W*/ 
	 1,0,  
 	0,-1,
 	-1,0
 };
 score+=a[r][c];
 sum++;
 a[r][c]--;
 while(1){
 	r2=r+dir[step][0];
	c2=c+dir[step][1];
 	while(a[r2][c2]==-1 || r2<0 || r2>(m-1) || c2<0 ||c2>(n-1)){
 		step++;
 		step=step%4;
 		r2=r+dir[step][0];
	    c2=c+dir[step][1];
	 }
	 r=r+dir[step][0];
	 c=c+dir[step][1];
	 printf("%d %d\n",r,c);
	 if(a[r][c]==0)break;
	 score+=a[r][c];
	 sum++;
	 a[r][c]--;
 	if(score % k==0)step++;
 	step=step%4;
 }
 printf("%d %d",score,sum);
  return 0;
} 
