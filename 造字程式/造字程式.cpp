#include<stdio.h>
#include<string.h>
int main(){
	int K,Q,R,i,j;
	printf("請輸入K Q R的值\n");
	scanf("%d%d%d",&K,&Q,&R);
	char string[K];
	printf("請輸入初始字串\n");
	scanf("%s",string);
	int input[Q][K];
	char output[Q][K];
	printf("請輸入修改參數\n");
	for(i=0;i<Q;i++){
		for(j=0;j<K;j++){
			scanf("%d",&input[i][j]);
			output[i][input[i][j]-1]=string[j];
		}
		strcpy(string,output[i]);
	}
	for(j=0;j<R;j++){
		for(i=0;i<Q;i++){
			printf("%c",output[i][j]);	
		}
		printf("\n");
	}
} 
