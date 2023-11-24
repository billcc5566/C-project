#include<stdio.h>
int main(){
	int n,m,i,j,sum0=100,sum=0;
	printf("請輸入n行m列\n");
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y,now;
	while(sum!=sum0){
		sum0=sum;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		now=a[i][j];
		x=i;
		y=j;
		while((x+1)<n && now!=-1){
		x++;	
		if(now==a[x][y]){
		 a[i][j]=-1;
		 a[x][y]=-1;
		 sum+=now;
		 now=-2;
		 break;}
		else if(a[x][y]==-1)continue;
		else break;
		}
		x=i;
		while((y+1)<m && now!=-2 && now!=-1){
		y++;	
		if(now==a[x][y]){
		 a[i][j]=-1;
		 a[x][y]=-1;
		 sum+=now;
		 now=-2;
		 break;}
		 else if(a[x][y]==-1)continue;
		 else break;
		}	
	}}}
	printf("最大得分為%d",sum);
	return 0;
} 
