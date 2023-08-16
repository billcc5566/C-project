#include<stdio.h> 
int main(){
	int n,i,max=0,time,error=0;
	printf("請輸入提交紀錄次數\n");
	scanf("%d",&n);
	int a[n][2];
	printf("請輸入上傳時間與分數\n");
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
		if(a[i][1]>max){
		time=a[i][0];
		max=a[i][1];	
		}
		if(a[i][1]==-1)error++;
	}
	printf("總分為%d最高分時間點為%d",max-n-2*error,time);
}
