#include<stdio.h>
#include<math.h>
int main(){
	int n,i,len,j,k,s;
	printf("�п�Jn�Pn�Ӿ��\n");
	scanf("%d",&n);
	int c[n][n],v[n][n];
	for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	c[i][j]=0;
	  	v[i][j]=0;
	  }	
	} 
	for(i=0;i<n;i++){
	scanf("%d",&v[i][i])	;
	c[i][i]=0;
	}
	for(len=2;len<=n;len++){        /*����2�}�l�A�Ѥp��j�X��*/
	    for (i=0;i<=n-len;i++) {
                j=i+len-1;
                c[i][j] = 1000;  /*��l�ƪ�O���ܤj����*/
                for (k = i; k < j; k++) {
                	s=c[i][k] + c[k + 1][j] + abs(v[i][k]-v[k+1][j]);
                	if(s < c[i][j]){
                		c[i][j] = s;
					} 
					v[i][j] = v[i][k] + v[k + 1][j];  /*��s�`�I����*/	
                }
            }		
	}
	printf("�̤p��O%d",c[0][n-1]);
	return 0;
} 
