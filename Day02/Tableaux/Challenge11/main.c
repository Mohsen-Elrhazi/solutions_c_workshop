#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,v,nv;
    printf("entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("entrer les elements du tableau:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("quelle valeur doit etre remplace:");
    scanf("%d",&v);
    printf("entrer la nouvelle valeur a remplacer:");
    scanf("%d",&nv);

    for(i=0;i<n;i++){
        if(T[i]==v){
            T[i]=nv;
        }
    }
    printf("apres le remplacement:\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
    return 0;
}

