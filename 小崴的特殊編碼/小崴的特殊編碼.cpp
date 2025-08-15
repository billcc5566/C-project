#include<stdio.h>
int main(){
  int N,i;
  char a[2000];
  a[101]='A';
  a[111]='B';
  a[10]='C'; 
  a[1101]='D';
  a[1000]='E';
  a[1100]='F';
  scanf("%d",&N);
  int b[N];
  for(i=0;i<N;i++){
  	scanf("%d",&b[i]);
  }
  for(i=0;i<N;i++){
  	 printf("%c",a[b[i]]);}
  return 0;
} 
