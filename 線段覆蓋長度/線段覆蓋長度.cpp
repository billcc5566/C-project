#include<stdio.h>
int main(){
int n,i,j,k=0,sum=0;
int a[100000]={0};
printf("請輸入有幾個線段\n");
scanf("%d",&n);
int b[n][2];
printf("請輸入線段的開始端點座標與結束端點座標\n");
for(i=0;i<n;i++)scanf("%d%d",&b[i][0],&b[i][1]);
for(i=0;i<n;i++){
  for(j=b[i][0];j<b[i][1];j++){
  	a[j]=1;
  }	
}
while(k<100000){
	sum+=a[k];
	k++;
}
printf("總覆蓋的長度為%d",sum); 
return 0;
} 
