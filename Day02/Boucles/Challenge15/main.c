#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,F,i;

   do{
    printf("entrer un entier positif: ");
    scanf("%d",&N);
      }while(N<=0);
    F=1;
    for(i=1;i<=N;i++){
        F=F*i;
    }
    printf("la factorielle est : %d",F);


    return 0;
}
