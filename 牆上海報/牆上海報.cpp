#include<stdio.h>
int main(){
int n,k,i,hmax=0,ans=0,W=0,j=0;
printf("�п�Jn�Ӥ�O k�i����\n");
scanf("%d %d",&n,&k);
int h[n],w[k];
printf("�п�J��O���� �P�����e��\n");
for(i=0;i<n;i++){
 scanf("%d",&h[i]);
 if(h[i]>hmax)hmax=h[i];	
}
for(i=0;i<k;i++){
 scanf("%d",&w[i]);	
}
while(ans==0){
  	for(i=0;i<n;i++){
     if(h[i]>=hmax){
      	if(i>0 && h[i-1]>=hmax )W++;
		else W=1;   
	 }
 	else W=0;
 	if(W==w[j]){
 	  j++;
	  W=0;
	  	if(j==k){
		ans=1;
		break; 
	    } 	
	 }

    }
    if(ans==1)break;
    hmax--;
}
printf("�̤j�i�H�i�K�����׬�%d",hmax);

} 
