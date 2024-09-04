#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    do{
    printf("entrer une nombre entier positif: ");
    scanf("%d",&N);
    }while(N<=0);
    printf("les facteurs de nombre %d sont:\n ",N);
    for(i=1;i<=N;i++){
        if(N%i==0)
            printf("%d\n",i);
    }
    return 0;
}
