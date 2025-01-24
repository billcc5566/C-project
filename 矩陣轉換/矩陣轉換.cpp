#include<stdio.h>
int main(){
int R,C,M,i,j,x,change,max;
scanf("%d %d %d",&R,&C,&M);
if(R>=C){
max=R;}
else max=C;
int B[max][max];
int A[max][max];
int k[M];
for(i=0;i<max;i++){
	for(j=0;j<max;j++){
		B[i][j]=0;
		A[i][j]=0;
	}
}
for(i=0;i<R;i++){
	for(j=0;j<C;j++){
		scanf("%d",&B[i][j]);
	}
}
for(i=0;i<M;i++){
	scanf("%d",&k[i]);}
for(x=M-1;x>=0;x--){
	if(k[x]==0){
		change=R;
		R=C;
		C=change; 
		for(i=0;i<max;i++){
			for(j=0;j<max;j++){
				A[i][j]=B[j][R-i-1];}}
		for(i=0;i<max;i++){
	    for(j=0;j<max;j++){
		B[i][j]=A[i][j];}}}
	if(k[x]==1){
			for(i=0;i<max;i++){
			for(j=0;j<max;j++){
				A[i][j]=B[max-i-1][j];}}
		for(i=0;i<max;i++){
	    for(j=0;j<max;j++){
		B[i][j]=A[i][j];}}
	}
}
printf("%d %d\n",R,C);
for(i=0;i<max;i++){
	for(j=0;j<max;j++){
		if(A[i][j]!=0){
		printf("%d ",A[i][j]);}
	}
	printf("\n");
}
	return 0;
} 
