#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, min;
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
    min=T[0];
    for(i=0;i<n;i++){
        if(min>T[i])
            min=T[i];
    }
    printf("le min element est: %d",min);
    return 0;
}

