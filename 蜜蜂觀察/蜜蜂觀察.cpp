#include<stdio.h>
int main(){
	int m,n,k,i,j,b,sum=0;
	printf("請輸入蜂巢大小與行走步數\n");
	scanf("%d%d%d",&m,&n,&k);
	char a[m][n];
	printf("請輸入路徑每格的代表字母\n");
	for(i=0;i<m;i++){
			scanf("%s",a[i]);   /*(試過)須注意不能%c 一格一格key*/ 
	}
	int dir[6][2]={
		-1,0,
		0,1,
		1,1,
		1,0,
		0,-1,
        -1,-1		
	};
	int c[200];
	for(i=0;i<200;i++){
		c[i]=0;
	}
	int x=m-1,y=0;
	for(i=0;i<k;i++){
		scanf("%d",&b);
		if(x+dir[b][0]<m && 0<=x+dir[b][0] && y+dir[b][1]<n && 0<=y+dir[b][1]){
		x=x+dir[b][0];
		y=y+dir[b][1];} 
		printf("%c",a[x][y]);
		int d=a[x][y];
		if(c[d]==0)c[d]+=1;
	}
	printf("\n");
	for(i=0;i<200;i++){
		sum+=c[i];
	}
	printf("%d",sum);
	return 0;
} 
