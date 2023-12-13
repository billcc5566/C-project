#include<stdio.h>
#include<math.h> 
int main(){
 int x,y=0,a,c=0;
 printf("輸入正整數X\n");
 scanf("%d",&x);
 while(x!=0){
 	a=x%10;
 	if(c==0){
 	 c++;	
	 y+=a;}
 	else {
	 y-=a;
	 c--;
    }
 	x=x/10;
 }
 printf("%d\n",abs(y));
 return 0;
} 
