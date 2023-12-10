#include<stdio.h>
int main(){
 int a,b,c,A,B,C,n,i;
 int max=0;	
 printf("請輸入工廠一的三係數\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("請輸入工廠二的三係數\n");
 scanf("%d%d%d",&A,&B,&C);
 printf("請輸入n個員工\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
 	if(a*i*i+b*i+c+A*(n-i)*(n-i)+B*(n-i)+C>max)max=a*i*i+b*i+c+A*(n-i)*(n-i)+B*(n-i)+C;
 }
 printf("%d",max);
 return 0;
} 
