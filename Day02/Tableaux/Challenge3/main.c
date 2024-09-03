#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int s;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("entrer les elements du tableau:\n");
    s=0;
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
        s+=T[i];
    }
    printf("les elements du tableau sont:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
    printf("la somme des elem du tableau est: %d",s);
    return 0;
}

