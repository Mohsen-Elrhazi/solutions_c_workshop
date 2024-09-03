#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,help;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("entrer les elements du tableau:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("les elements du tableau sont:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }

    for(i=0;i<n/2;i++){
        help=T[i];
        T[i]=T[n-1-i];
        T[n-1-i]=help;
    }
    printf("apres l'inverse:\n");
    for(i=0;i<n;i++){
        printf("%d\n",T[i]);
    }
    return 0;
}

