#include<stdio.h>
#include<math.h> 
/*小寫a~z 97~122*/ 
int main(){
  int m,n,k,i,j,sum=0,k1=0,x,max=0,b;
  int a[150]={0};
  printf("請輸入m個輪盤，每個輪盤有n格，共k回合\n");
  scanf("%d %d %d",&m,&n,&k);
  int A[m][n],B[k][m];
  char c[m][n];  
  for(i=0;i<m;i++){
  		scanf("%s",c[i]);
  }
  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		A[i][j]=c[i][j]; /*輪盤英文字轉數字*/ 
	  }
  }
   for(i=0;i<k;i++){
  	for(j=0;j<m;j++){
  		scanf("%d",&B[i][j]);
  		if(i!=0)B[i][j]+=B[i-1][j];  /*讓轉動疊加(每個輪盤會基於上一個回合結束的狀態做轉動)*/ 
	  }
  }
  while(k1<k){   /*k控回合*/ 
  	for(i=0;i<n;i++){ /*每個輪盤的第i格 */ 
  	    for(j=0;j<m;j++){ /*第j個輪盤*/  
  	    if(B[k1][j]>0){
  	    	b=B[k1][j]%n;
  	    	b=n-b;  /*順時針1=逆時針n-1*/ 
  	    	a[ A[j][(i+b)%n] ]++;
  	    	/*printf("%d",A[j][(i+b)%n]);*/
		  }
		else {
		  a[ A[j][(i-B[k1][j])%n] ]++;
		  /*printf("%d",A[j][(i-B[k1][j])%n]);*/	
		}                      
	  }
	  for(x=0;x<150;x++){
	  	if(a[x]>max)max=a[x];
	  }
	  /*printf("%d\n",max);*/ 
	  sum+=max;
	  max=0;
	   for(x=0;x<150;x++){
	  	a[x]=0;
	  }
	  } 
  	k1++;
  }
  printf("%d",sum);
  return 0;
} 
