#include<stdio.h>
#include<math.h> 
/*�p�ga~z 97~122*/ 
int main(){
  int m,n,k,i,j,sum=0,k1=0,x,max=0,b;
  int a[150]={0};
  printf("�п�Jm�ӽ��L�A�C�ӽ��L��n��A�@k�^�X\n");
  scanf("%d %d %d",&m,&n,&k);
  int A[m][n],B[k][m];
  char c[m][n];  
  for(i=0;i<m;i++){
  		scanf("%s",c[i]);
  }
  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		A[i][j]=c[i][j]; /*���L�^��r��Ʀr*/ 
	  }
  }
   for(i=0;i<k;i++){
  	for(j=0;j<m;j++){
  		scanf("%d",&B[i][j]);
  		if(i!=0)B[i][j]+=B[i-1][j];  /*������|�[(�C�ӽ��L�|���W�@�Ӧ^�X���������A�����)*/ 
	  }
  }
  while(k1<k){   /*k���^�X*/ 
  	for(i=0;i<n;i++){ /*�C�ӽ��L����i�� */ 
  	    for(j=0;j<m;j++){ /*��j�ӽ��L*/  
  	    if(B[k1][j]>0){
  	    	b=B[k1][j]%n;
  	    	b=n-b;  /*���ɰw1=�f�ɰwn-1*/ 
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
