#include <stdio.h>

int main(void) {
  int n,m,k,i,j,rest,X,Y,c,sum=0;
  printf("�п�Jn m k\n");
  scanf("%d%d%d",&n,&m,&k);
  int M[k][4],maze[n][m],live[k];
  printf("�п�J�]����m�P���ʦV�q\n");
  for(i=0;i<k;i++){
    for(j=0;j<4;j++){
      scanf("%d",&M[i][j]);
    }
  }
  for(i=0;i<k;i++){live[i]=1;} /*�N��s��*/
  rest=k;      /*�ѴX���]��*/
  while(rest!=0){
    for(i=0;i<k;i++){
    if(live[i]==1){
      maze[M[i][0]][M[i][1]]=1;  /*�񬵼u*/
      X=M[i][0]+M[i][2];
      Y=M[i][1]+M[i][3];
      if(X<0||X>=n||Y<0||Y>=m){
        live[i]=0;
        rest=rest-1;
        continue;
      }
      if(maze[X][Y]==1){/*�����u�n�ݭ����]������*/
        maze[X][Y]=0;
        M[i][0]=X;
         M[i][1]=Y;
        for(c=0;c<k;c++){
         if(M[c][0]==X && M[c][1]==Y&&live[c]==1){
        live[c]=0;
        rest=rest-1;
         } 
        }
      }
      else{M[i][0]=X;
         M[i][1]=Y;
        }
    }
      }
  }
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(maze[i][j]==1)sum++;
      }
   }
  printf("�ѤU%d�榳���u",sum);
  return 0;
}
