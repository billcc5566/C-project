#include<stdio.h>
int main(){
int N,K,i,j,R=0,c,s=100,ps;
scanf("%d %d",&N,&K);
int P[N] ;
for(i=0;i<N;i++){
	scanf("%d",&P[i]);
}
for(j=N;j>1;j--){  /*小排到大*/ 
for(i=0;i<j-1;i++){
 if(P[i]>P[i+1]){
 	c=P[i];
 	P[i]=P[i+1];
 	P[i+1]=c;
 }	
}}
/*for(i=0;i<N;i++){    
	printf("%d",P[i]);
}*/
while(s!=K){
 R=R+1;	
 s=1;
 ps=P[0];
 for(i=1;i<N;i++){
  if(P[i]-ps>R  ){
  	ps=P[i];
  	s++;
  } 
}	
} 
printf("%d",R);
} 
