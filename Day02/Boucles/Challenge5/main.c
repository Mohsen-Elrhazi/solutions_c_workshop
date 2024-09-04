#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,som;

    printf("entrer une valeur:");
    scanf("%d",&N);
    som=0;
    for(i=1;i<=N;i++){
        som =som + i;
    }
    printf("la somme des premiers entiers de 1 a %d est: %d",N,som);
    return 0;
}
