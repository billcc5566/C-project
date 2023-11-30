#include<stdio.h>
int main(){
 int i,j,k;
 int a[3];
 printf("請輸入三邊長\n");
 scanf("%d %d %d",&a[0],&a[1],&a[2]);
 for(i=1;i>=0;i--){
 	for(j=0;j<=i;j++){
 		if(a[j]>a[j+1]){
 		  k=a[j];
		  a[j]=a[j+1];
		  a[j+1]=k; 	
		 }
	 }
 } 
 for(i=0;i<3;i++)printf("%d ",a[i]);
 if(a[0]+a[1]<=a[2])printf("\nNo");
 else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])printf("\nObtuse");
 else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])printf("\nRight");
 else printf("\nAcute");
 return 0;
} 
