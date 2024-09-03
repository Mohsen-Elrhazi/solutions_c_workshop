#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    printf("entrer la temperature en Celsius: ");
    scanf("%d",&C);
    printf(" l'etat de l'eau est: ");
    if( C<0)
        printf("Solide");
        else if(C<100)
            printf("Liquide");
        else
            printf("Gaz");
    return 0;
}
