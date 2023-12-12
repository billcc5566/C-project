#include<stdio.h>
int main(){
 int a,b,n,i,na=0,nb=0,c=1,out=0;
 printf("請輸入要觀察的商品編號\n");
 scanf("%d%d",&a,&b);
 printf("請輸入n位客人\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 	while(c!=0){
 	scanf("%d",&c);
 	if(c==a)na++;
 	if(c==-a)na--;
 	if(c==b)nb++;
 	if(c==-b)nb--;
	 }
	if(na>0 && nb>0)out++; 
 	c=1;
	na=0;
	nb=0;	 
 }
 printf("%d",out);
 return 0;
} 
