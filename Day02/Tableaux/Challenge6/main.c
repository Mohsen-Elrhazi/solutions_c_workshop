#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i ;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    int F[n];
    printf("entrer les elements du tableau:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
        printf("entrer le facteur:");
        scanf("%d",&F[i]);
    }
    printf("les elements du tableau sont:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }

    printf("apres la multiplication :\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]*F[i]);
    }

    return 0;
}

