#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max;
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
    max=T[0];
    for(i=0;i<n;i++){
        if(max<T[i])
            max=T[i];
    }
    printf("le max element est: %d",max);
    return 0;
}

