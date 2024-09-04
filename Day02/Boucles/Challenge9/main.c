#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exposant,i;
    int result=1;
    do{
        printf("entrer la base:");
        scanf("%d",&base);
    }while(base<=0);

    do{
        printf("entrer l'exposant:");
        scanf("%d",&exposant);
    }while(exposant<0);

    i = 0;
    while (i < exposant) {
        result *= base;
        i++;
    }

    // Afficher le résultat
    printf("%d a la puissance %d est egal a %d\n", base, exposant, result);
    return 0;
}
