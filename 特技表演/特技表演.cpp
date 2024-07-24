#include<stdio.h>
int main(){
  int n,i,j,k=0,l=0;
  printf("請輸入多少棟高樓\n");
  scanf("%d",&n);
  int a[n];
  printf("請輸入樓高\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=i;j<n-1;j++){
    if(a[j]>a[j+1]){
      k++;
      if(k>l)l=k;
    }
    else {
      k=0;
      continue;
    }	
    }k=0;
  }
  printf("%d\n",l+1);
  return 0;
} 
