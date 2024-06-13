#include<stdio.h>
int main(){
 int N,D,i,j,step=1,steplen;	
 printf("請輸入方陣大小與起始方向\n");
 scanf("%d%d",&N,&D);
 int a[N][N];
 int direction[4][2]={0,-1,   /*左上右下*/ 
                      -1,0,
                      0,1,
                      1,0   };
 for(i=0;i<N;i++){
 	for(j=0;j<N;j++){
 		scanf("%d",&a[i][j]);
	 }
 }
 int x=(N-1)/2,y=(N-1)/2;
 int k=1;
 printf("%d",a[x][y]);   /*輸出起點*/ 
 while(k<N*N){  /*控同一方向之步數*/ 
 	steplen=(step+1)/2;      /*控步長(無條件捨去)*/ 
 	for(i=0;i<steplen;i++){
 	  x+=direction[(D+step-1)%4][0];     /* D+step-1 控方向*/ 
	  y+=direction[(D+step-1)%4][1];
	  printf("%d",a[x][y]);
	  k++;
	  if(k==(N*N))break;	
	 }
	 step++;
 }
 return 0;
} 
