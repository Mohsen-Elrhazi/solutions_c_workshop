#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,M;
    printf("entrer un nombre: ");
    scanf("%d",&N);
    for(i=10;i>=1;i--){
      M=N*i;
      printf("%d * %d = %d\n",N,i,M);
    }
    return 0;
}