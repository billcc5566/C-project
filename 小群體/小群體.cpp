#include<stdio.h>
int main(){
 int n,i,j,k,club=0,y;
 scanf("%d",&n);
 int a[n];
 int b[n]; 
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   b[i]=0; 
 }
 for(i=0;i<n;i++){  /*�C�ӤH���ݤ@�M*/ 
    k=i;
  while(b[k]==0){  /*�p�G���H�|����L*/ 
  	b[k]=1;     /*�аO��L*/ 
  	j=a[k];
  	k=j;
  	y=1;      /*y���ӰO���O�_�i�j��*/ 
  }	
  if(y==1){
  club++;
  }
  y=0;
 }
 printf("�`�@��%d�Ӥp�s��",club); 
 return 0;
} 
