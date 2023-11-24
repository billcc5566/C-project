#include<stdio.h>
int main(){
	int i,x,n,k,l=0,r=0;
	printf("叫块x籔n\n");
	scanf("%d%d",&x,&n);
	int max=x,min=x;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k>x){
			r++;
			if(k>max)max=k;
		}
		else{
			l++;
			if(k<min)min=k;
		}
	}
	if(r>l){
		printf("程计秖%d程氨竚%d",r,max);
	}
	else printf("程计秖%d程氨竚%d",l,min);
	return 0;
} 
