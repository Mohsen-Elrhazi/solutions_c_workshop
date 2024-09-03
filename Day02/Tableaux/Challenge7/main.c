#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,j,help;
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
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(T[i]>T[j]){
                help=T[i];
                T[i]=T[j];
                T[j]=help;
            }
        }
    }
    printf("apres le tri d'ordre croissant:\n");
     for(i=0;i<n;i++){
        printf("%d\n",T[i]);
     }
    return 0;
}

