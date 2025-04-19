#include<stdio.h>
#include<math.h>
int main(){
	int n,i,len,j,k,s;
	printf("請輸入n與n個整數\n");
	scanf("%d",&n);
	int c[n][n],v[n][n];
	for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	c[i][j]=0;
	  	v[i][j]=0;
	  }	
	} 
	for(i=0;i<n;i++){
	scanf("%d",&v[i][i])	;
	c[i][i]=0;
	}
	for(len=2;len<=n;len++){        /*長度2開始，由小到大合併*/
	    for (i=0;i<=n-len;i++) {
                j=i+len-1;
                c[i][j] = 1000;  /*初始化花費為很大的值*/
                for (k = i; k < j; k++) {
                	s=c[i][k] + c[k + 1][j] + abs(v[i][k]-v[k+1][j]);
                	if(s < c[i][j]){
                		c[i][j] = s;
					} 
					v[i][j] = v[i][k] + v[k + 1][j];  /*更新節點的值*/	
                }
            }		
	}
	printf("最小花費%d",c[0][n-1]);
	return 0;
} 
