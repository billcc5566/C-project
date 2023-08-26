#include<stdio.h>
int main(){
 int i,P=0;	
 int a[3];
 int b[10]={0};
 printf("輸入三個1~9整數\n");
 scanf("%d %d %d",&a[0],&a[1],&a[2]);
 for(i=0;i<3;i++){
 	b[a[i]]++;
 }
 for(i=1;i<=9;i++){
 	if(b[i]>P)P=b[i];
 }
 printf("%d ",P);
 for(i=9;i>0;i--){
 	if(b[i]!=0){
 		printf("%d ",i);
	 }
 }
} 
