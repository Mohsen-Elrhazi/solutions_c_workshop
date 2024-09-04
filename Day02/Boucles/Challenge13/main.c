#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,M;
    int somme=0;;
    printf("entrer un nombre: ");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
      M=N*i;
      printf("%d * %d = %d\n",N,i,M);
      somme+=M;
    }
    printf("la somme des produits est: %d",somme);
    return 0;
}
