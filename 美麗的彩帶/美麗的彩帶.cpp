#include<stdio.h>
int main(){
  int m,n,i,j,k,sum=0,can;
  scanf("%d %d",&m,&n);
  int a[n];
  int b[100]={0};    /*�̦h87��*/ 
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  for(i=0;i<=n-m;i++){  /*�l�϶��}�Y*/ 
        can=1;
  	for(j=i;j<=i+m-1;j++){  /*�l�϶��d��*/ 
  		if(b[a[j]]==1)can=0;		
  		b[a[j]]=1;	
	  }
	  if(can==1)sum++;
	  for(k=0;k<100;k++){
	  	b[k]=0;
	  } 
  }
  printf("%d",sum);
  return 0;
} 
