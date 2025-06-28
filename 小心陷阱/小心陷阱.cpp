#include<stdio.h>
int main(){
  int k,x1,y1,x2,y2,i=0;
  printf("請輸入初始生命值\n");
  scanf("%d",&k);
  printf("請輸入x1 y1 x2 y2\n");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  while(k>0){
  	i+=k;
  	if(i%x1==0)k-=y1;
  	if(i%x2==0)k-=y2;
  }
  printf("%d",i);
  return 0;
} 
