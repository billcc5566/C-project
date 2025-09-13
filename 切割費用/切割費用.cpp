#include<stdio.h>
int main(){
      int n,L,i,j,a,b,l,r,sum=0;
      int s[n];  /*紀錄先後切的位置*/ 
      scanf("%d %d",&n,&L);
      int rod[L+1];   /*紀錄哪裡被切*/ 
      rod[0]=1;
      rod[L]=1;
      for(i=0;i<n;i++){
      	scanf("%d %d",&a,&b);
      	s[b-1]=a;
	  }
	  for(i=0;i<n;i++){
      	l=s[i];
		r=s[i];
		for(j=0;j<L;j++){
		  if(rod[l-j]==1){
		  	l=l-j;
		  	break;
		  }	
		}  
		for(j=0;j<L;j++){
		  if(rod[r+j]==1){
		  	r=r+j;
		  	break;
		  }
		}
		sum+=r-l;
		rod[s[i]]=1; 
	  }
	  printf("%d",sum);
	}
