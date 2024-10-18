#include<stdio.h>
#include<math.h>
int main(){
 int a[5];
 int i,j,r=0,total=0,sumA=0,sumB=0,small=100;
 for(i=0;i<5;i++){
 	scanf("%d",&a[i]);
 }
 int A[a[0]][a[1]];
 int B[a[2]][a[3]];
 for(i=0;i<a[0];i++){
 	for(j=0;j<a[1];j++){
 		scanf("%d",&A[i][j]);
 		sumA+=A[i][j];
	 }
 }
  for(i=0;i<a[2];i++){
 	for(j=0;j<a[3];j++){
 		scanf("%d",&B[i][j]);
	 }
 }
 int h,v,x,y;
 v=a[2]-a[0]+1;
 h=a[3]-a[1]+1;
 for(i=0;i<v;i++){
 	for(j=0;j<h;j++){ /*子陣列最左上角座標(i,j)*/ 
 		for(x=i;x<i+a[0];x++){
 			for(y=j;y<j+a[1];y++){ /*子陣列全掃一遍*/ 
 				if(B[x][y]!=A[x-i][y-j])r++;
 				sumB+=B[x][y];
			 }
		 }
		 if(r<=a[4]){
		 total++;
		 if(abs(sumB-sumA)<small)small=abs(sumB-sumA);}
		 r=0;
		 sumB=0;
	 }
 }
 printf("%d\n",total);
 if(total==0)printf("-1");
 else printf("%d",small);
 return 0;
} 
