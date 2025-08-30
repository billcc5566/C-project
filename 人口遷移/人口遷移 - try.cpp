#include<stdio.h>
int main(){
	int R,C,i,j;
	scanf("%d %d",&R,&C);
	int a[R+2][C+2];
	for(i=1;i<R+1;i++){
		for(j=1;j<C+1;j++){
		 a[i][j]=5;
		 printf("%d",a[i][j]);
		}
	}
} 
