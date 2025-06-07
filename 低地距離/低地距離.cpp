#include<stdio.h>
int main(){
 int n,i,j,sum=0;
 scanf("%d",&n);
 int a[n*2];
 int b[n+1][2];
 for(i=0;i<n+1;i++){
 	for(j=0;j<2;j++){
 		b[i][j]=-1; 
	 }
 }
 for(i=0;i<2*n;i++){
 	scanf("%d",&a[i]);
 	if(b[a[i]][0]==-1)b[a[i]][0]=i;
 	else b[a[i]][1]=i;
 }
 for(i=1;i<=n;i++){
 	for(j=b[i][0];j<b[i][1];j++){
 		if(a[j]<i)sum++;
	 }
 }
 printf("%d",sum);
 return 0;
} 
