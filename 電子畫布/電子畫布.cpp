#include<stdio.h>
#include<math.h>
int main(){
  int h,w,n,i,j,k;
  printf("請輸入h*w電子畫布n次畫筆操作\n");
  scanf("%d%d%d",&h,&w,&n);
  int a[n][4];
  int b[h][w];
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      b[i][j]=0;
    }
  }
  printf("請輸入畫筆操作\n");
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
       scanf("%d",&a[i][j]);
  }}
  for(k=0;k<n;k++){
    for(i=a[k][0]-a[k][2];i<=a[k][0]+a[k][2];i++){
      for(j=a[k][1]-a[k][2];j<=a[k][1]+a[k][2];j++){
        if(0<=i && i<h && 0<=j && j<w){
          if(abs(i-a[k][0])+abs(j-a[k][1])<=a[k][2]){
            b[i][j]+=a[k][3];
          }
        }
      }
    }
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  return 0;
} 
