#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n], C[n];
    printf("entrer les elements du tableau:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }

    for(i=0;i<n;i++){
       C[i]=T[i];
    }

    printf("les elements du tableau original sont:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
    printf("les elements du tableau copie sont:\n");
    for(i=0;i<n;i++){
        printf("C[%d]=%d\n",i,C[i]);
    }

    return 0;
}

