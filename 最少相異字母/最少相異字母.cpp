#include<stdio.h>
#include<math.h> 
/*大寫A~Z 65~90*/ 
int main(){
  int N,i,j,c,min=100,minn=0,sum=0,k,d1,d2;
  printf("請輸入字串個數\n");
  scanf("%d",&N);
  char B[N][100];
  for(i=0;i<N;i++){
  scanf("%s",B[i]);
  }
  int A[N][100]={0};
  for(i=0;i<N;i++){
  	for(j=0;j<100;j++){
  		if(B[i][j]=='\0')break;
  		c=B[i][j];
  		if(A[i][c]==0){
		  A[i][c]=1;
		  sum++;}
	  }
	  if(sum<min){
	  	min=sum;
	  	minn=i;
	  }
	  else if(sum==min){
	  	for(k=0;k<100;k++){
	  		d1=B[i][k];
	  		d2=B[minn][k];    /* '\0'會是0 */
	  		if(d1<d2){
	  			minn=i;
	  			break;
			  }
			if(d1>d2)break;  
		  }
	  }
	 sum=0; 	
  }
   printf("%s",B[minn]);

  return 0;
} 
