#include<stdio.h>
#include<math.h> 
/*大寫A~Z 65~90*/ 
/*小寫a~z 97~122*/ 
int main(){
  int k,i,j,sum=1,l,max=0;
  char a[100];
  int b[100]={0};
  scanf("%d",&k);
  scanf("%s",a);
  for(i=0;i<100;i++){
  	if(a[i]=='\0'){
  		l=i;          
  		break;
	  }
  	b[i]=a[i]-95;   /*讓大寫負 小寫正*/ 
  }
  for(i=0;i<l-1;i++){       /*i為交錯字串開頭*/ 
  	for(j=i;j<l-1;j++){	
  	 if((b[j]*b[j+1]<0) && ((j-i+1)%k!=0))break;
  	  if((b[j]*b[j+1]>0) && ((j-i+1)%k==0))break;
  	 sum++;
  	 if(sum>max)max=sum;
	  }
	  sum=1;
  }
  max=max-max%k;
  printf("%d",max);
  return 0;
} 
