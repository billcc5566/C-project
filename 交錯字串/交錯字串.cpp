#include<stdio.h>
#include<math.h> 
/*�j�gA~Z 65~90*/ 
/*�p�ga~z 97~122*/ 
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
  	b[i]=a[i]-95;   /*���j�g�t �p�g��*/ 
  }
  for(i=0;i<l-1;i++){       /*i������r��}�Y*/ 
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
