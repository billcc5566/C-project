#include<stdio.h>
int main(){
 int F,N,i;
 scanf("%d %d",&F,&N);
 int s[N],b[N];
 b[0]=F;
 for(i=0;i<N;i++){
 	scanf("%d",&s[i]);
 	if(i>0)b[i]=s[i-1];
 	if(i>1){
 		if(s[i-2]==s[i-1]){
 			if(s[i-2]==0)b[i]=5;
 			else if(s[i-2]==2)b[i]=0;
 			else b[i]=2;
		 }
	 }
	 printf("%d ",b[i]);
	 if((b[i]==0 && s[i]==2)||(b[i]==2 && s[i]==5)||(b[i]==5 && s[i]==0)){
	 printf(": Won at round %d",i+1);
	 break;}
	 else if((b[i]==2 && s[i]==0)||(b[i]==5 && s[i]==2)||(b[i]==0 && s[i]==5)){
	 printf(": Lost at round %d",i+1);
	 break;}
	 if(i==N-1)printf(": Drew at round %d",i+1);
 }

 return 0;
} 
