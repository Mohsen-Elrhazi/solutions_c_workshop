#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n=0,i;
    float somme, moyenne;

    while(1){
        printf("entrer une valeur: ");
        scanf("%d",&T[n]);
        if(T[n]==0)
            break;
        n++;
    }
    somme=0;
    for(i=0;i<n;i++){
            somme+=T[i];
    }
    moyenne=somme/n;
    printf("la somme est: %.2f\n",somme);
    printf("la moyenne est: %.2f",moyenne);
    return 0;
}
