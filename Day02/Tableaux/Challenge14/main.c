#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,som,moyenne;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("entrer les elements du tableau:\n");
    som=0;
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
        som+=T[i];
    }
    moyenne=som/n;
    printf("la moyenne des elem du tableau est:%d",moyenne);

    return 0;
}

