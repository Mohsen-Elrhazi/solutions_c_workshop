#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,inverse=0;
    printf("entrer un nombre: ");
    scanf("%d",&N);
    do{
        inverse = inverse * 10 +N % 10;
        N = N / 10;
    }while(N!=0);

    printf("le nombre inverse: %d\n",inverse);
    return 0;
}
