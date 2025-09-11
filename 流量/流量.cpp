#include<stdio.h>
int main(){
   int n,m,i,j,k,mincost=99999,cost;
    scanf("%d %d %d",&n,&m,&k);
    int Q[n][m],a[k][n],flow[m][m];
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		scanf("%d",&Q[i][j]);
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	while(k>0){
		cost=0;
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
		flow[i][j]=0;}}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
	
		  flow[a[k-1][i]][j]+=Q[i][j]; /*a[k-1][i]是k-1方案i伺服器所在城市*/ 
        	}     
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
			  if(i==j) cost+=flow[i][j];
			  else{
			  	if(flow[i][j]>=1000) cost+=3000+2*(flow[i][j]-1000);
                else cost+=3*(flow[i][j]);
			  }
			}
		}
		if(cost<mincost)mincost=cost;
		k--;
	}
	printf("%d",mincost);
	
	}
