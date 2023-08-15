#include<stdio.h>
int main(){
	int n,i,d;
	printf("請輸入n個座標\n");
	scanf("%d",&n);
	int a[n][2]={0};
	int dir[3]={0};
	printf("請輸入%d個座標\n",n);
	for(i=1;i<=n;i++){
	 scanf("%d%d",&a[i][0],&a[i][1]); 	
	}
	int x1=a[1][0],x2,y1=a[1][1],y2;
	for(i=2;i<=n;i++){
	 x2=a[i][0]-a[i-1][0];
	 y2=a[i][1]-a[i-1][1];
	 d=x1*y2-x2*y1;
	 if(d>0)dir[0]++;
	 else if(d<0) dir[1]++;
	 else dir[2]++;
	 y1=y2;
	 x1=x2;	
	}
	printf("左轉%d右轉%d迴轉%d",dir[0],dir[1],dir[2]);
	return 0;
} 
