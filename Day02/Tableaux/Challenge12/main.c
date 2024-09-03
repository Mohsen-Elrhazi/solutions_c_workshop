#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("entrer les elements du tableau:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }

    printf("les elements pair du tableau sont:\n");
    for(i=0;i<n;i++){
        if(T[i]%2==0){
            printf("%d\n",T[i]);
        }
    }

    return 0;
}

