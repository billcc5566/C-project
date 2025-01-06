#include<stdio.h>
int main(){
 int a,b,n,i,sum=0;
 printf("請分別輸入綠燈、紅燈所需秒數\n");
 scanf("%d %d",&a,&b);
 printf("請輸入人數\n");
 scanf("%d",&n);
 int t[n];
 for(i=0;i<n;i++){
 	scanf("%d",&t[i]);
 	if(t[i]%(a+b)>=a){
 		sum+=a+b-t[i]%(a+b);
	 }
 }
 printf("共需要等待 %d 秒",sum);
  return 0;
} 
