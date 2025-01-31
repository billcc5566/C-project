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
 for(i=0;i<n;i++){  /*每個人都看一遍*/ 
    k=i;
  while(b[k]==0){  /*如果此人尚未找過*/ 
  	b[k]=1;     /*標記找過*/ 
  	j=a[k];
  	k=j;
  	y=1;      /*y拿來記錄是否進迴圈*/ 
  }	
  if(y==1){
  club++;
  }
  y=0;
 }
 printf("總共有%d個小群體",club); 
 return 0;
} 
