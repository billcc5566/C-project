#include<stdio.h>
int main(){
	int n,k,maxh=0,i,j,a=0,b=0,w1=0;
	printf("�п�J�X�Ӥ�O�P����\n");
	scanf("%d%d",&n,&k);
	int h[n],w[k];
	printf("��J��O����\n");
	for(i=0;i<n;i++){
		scanf("%d",&h[i]);
		if(h[i]>maxh)maxh=h[i];
	}
	printf("��J�����e��\n");
	for(i=0;i<k;i++){
		scanf("%d",&w[i]);
	}
	while(a!=1){   /*a=1�N���쵪��*/
	    if(h[0]>=maxh){
		w1++;
		if(w1==w[b]){
		b++;
		w1=0;	
		}
	}
	    for(i=1;i<n;i++){
	    if(h[i]>=maxh){
      
		w1++;
		if(w1==w[b]&&b<=k-1){
		b++;
		w1=0;	
				
		}
        }
    else{ 
      w1=0;
      }
      if(b==k){
			a=1;
        maxh++;
        break;
		}  
	}
		
		maxh--;
    b=0;
    w1=0;
	}
	printf("%d",maxh);	
} 
