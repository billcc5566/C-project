#include<stdio.h>
/**/ 
int main(){
	int n,i,j,sum=0;
	printf("�п�J���X�e��\n");
	scanf("%d",&n);
	int h[n];
	printf("�п�J���X����\n");
	for(i=0;i<n;i++){
	   scanf("%d",&h[i]);	
	}
  if(h[0]==0)sum=h[1]+sum;
  if(h[n-1]==0)sum=h[n-2]+sum;
	for(j=1;j<n-1;j++){ 
	 if (h[j]==0){
	 	if(h[j+1]>=h[j-1])sum=sum+h[j-1];
	 	else sum=sum+h[j+1];
	 }
	 	}
  printf("�s�W�����X�����`�M��%d",sum);
  return 0;
}
