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
    int v, trv=0,pos;
    printf("entrer la valeur a rechercher: ");
    scanf("%d",&v);
    for(i=0;i<n;i++){
            if(T[i]==v){
                trv=1;
                pos=i;
                break;
            }
    }
    if (trv==0)
        printf("la valeaur %d n'existe pas",v);
    else
        printf("la valeur:%d existe dans la position:%d",v,pos);
    return 0;
}

