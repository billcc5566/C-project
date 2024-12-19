#include<stdio.h>
int main(){
int i,n,w1,w2,h1,h2,A1,A2,hmax=0,v1,v2,sum=0;
printf("要裝幾次飲料\n");
scanf("%d",&n);
printf("請輸入w1,w2,h1,h2\n");
scanf("%d %d %d %d",&w1,&w2,&h1,&h2);
printf("請輸入每次裝多少容量飲料\n");
int v[n],h[n];
A1=w1*w1;
A2=w2*w2;
v1=A1*h1;
v2=A2*h2;
for(i=0;i<n;i++){
	scanf("%d",&v[i]);
	if(sum<=v1){  /*分成加前v1內加後v1內,加前v1內加後超過v1,加前超過v1*/
	sum+=v[i];
	if(sum<=v1){
	h[n]=v[i]/A1;
	if(h[n]>hmax)hmax=h[n];}
	else{
	h[n]=h1-h[n-1];
	h[n]+=(sum-v1)/A2;
	if(h[n]>hmax)hmax=h[n];
	}	
	}
	else{
	h[n]=v[i]/A2;
	if(h[n]>hmax)hmax=h[n];
	}
	
}
printf("這幾次倒水中，上升變化量最大的高度為%d",hmax);
  return 0;
} 
