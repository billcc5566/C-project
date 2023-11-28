#include<stdio.h>
int main(){
int n,max=0,min=0,d1=100,d2=100;
int i,j,big;	
printf("請輸入學生人數\n");
scanf("%d",&n);
int a[n];
printf("請輸入各學生分數\n");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  if(a[i]>=60 && a[i]-60<d1){
  	d1=a[i]-60;
  	min=a[i];
  }	
  if(a[i]<60 && 60-a[i]<d2){
  	d2=60-a[i];
  	max=a[i];
  }	
}
for(i=n-1;i>0;i--){
	for(j=0;j<i;j++){
	if(a[j]>a[j+1]){
	big=a[j];
	a[j]=a[j+1];
	a[j+1]=big;	
	}}}
for(i=0;i<n;i++)printf("%d ",a[i]);
if(max!=0)printf("\n%d",max);
else printf("\nbest case");
if(min!=0)printf("\n%d",min);
else printf("\nworst case");
	return 0;
} 
