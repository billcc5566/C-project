#include<stdio.h>
int main(){
 int n,k,i,j,m,max=0,min=0,x,n2,k2;
 printf("½Ð¿é¤Jn»Pk\n");
 scanf("%d%d",&n,&k);
 n2=n;
 int a[n],c[n];
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 } 
 int b[n][n];
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  b[i][j]=0;	
  }
 }
 for(i=0;i<n;i++){
  for(j=i;j<n;j++){
    n2=n;
    while(n2>0){
      c[n2-1]=a[n2-1];       
        n2--;      }
    k2=k;
    do{
    min=0;
    b[i][j]=0; 
    for(m=i;m<=j;m++){
      if(c[m]<min){
        x=m;
        min=c[m];}
      b[i][j]+=c[m];
     }
     if(k2>0)b[i][j]-=min;
     c[x]=0; 
     k2--;
   }while(k2>0);
   }
 }
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  if(b[i][j]>max)max=b[i][j];	
  }
 }
 printf("%d\n",max);
  return 0;
} 
