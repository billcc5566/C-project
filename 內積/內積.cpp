#include<stdio.h>
int main(){
 int n,m,i,j,e,mid1=0,mid2=0,sum=0; /*mid紀錄何時開始為負(有幾個正的)*/ 
 int mid;
 printf("請輸入n與m\n");
 scanf("%d%d",&n,&m);
 int a[n],b[m];
  printf("請輸入陣列 a：\n");
  for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if(a[i]>0)mid1++;
  }
  printf("請輸入陣列 b：\n");
  for (i = 0; i < m; i++) {
      scanf("%d", &b[i]);
    if(b[i]>0)mid2++;
  }
 for(j=n;j>0;j--){     /*大排到小*/ 
 for(i=0;i<j-1;i++){   
  if(a[i]<a[i+1]){
    e=a[i];
    a[i]=a[i+1];
    a[i+1]=e;
   } 
 }}
 for(j=m;j>0;j--){
 for(i=0;i<j-1;i++){
  if(b[i]<b[i+1]){
    e=b[i];
    b[i]=b[i+1];
    b[i+1]=e;
     }
   } 
 }
 mid=(mid1<=mid2)? mid1:mid2;
 for(i=0;i<mid;i++){sum+=a[i]*b[i];}
 mid=(n-mid1<=m-mid2)?n-mid1:m-mid2;
 for(i=1;i<=mid;i++){sum+=a[n-i]*b[m-i];}
   if(sum==0){
     if(mid1>mid2)sum+=a[n-1]*b[0];
     else sum+=a[0]*b[m-1];
   }
 printf("%d",sum); 
} 
