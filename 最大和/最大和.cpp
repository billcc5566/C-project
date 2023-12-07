#include<stdio.h>
int main(){
 int n,m,i,j,max=0,c,s=0,ans=-1;
 printf("請輸入n與m以及n*m個整數\n");
 scanf("%d%d",&n,&m);
 int a[n];
 for(i=0;i<n;i++){
 	for(j=0;j<m;j++){
 	 scanf("%d",&c);	
 	 if(c>max){
 	   max=c;	
	  a[i]=c;}	
	 }
	 max=0;
 }
 for(i=0;i<n;i++){
 	s+=a[i];
 }
 printf("%d\n",s);
 for(i=0;i<n;i++){
 	if(s % a[i]==0){
 	 ans=0;	
	 printf("%d ",a[i]);}
 }
 if(ans!=0)printf("%d",ans);
 return 0;
} 
