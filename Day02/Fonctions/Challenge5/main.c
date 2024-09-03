#include <stdio.h>
#include <stdlib.h>

int factorielle(int N){
    int i,f=1;
    for(i=1;i<=N;i++){
        f=f*i;
    }
    return f;
}

int main()
{
    int N;
    printf("entrer la valeur de N:");
    scanf("%d",&N);
    printf("la factorille est: %d",factorielle(N));
    return 0;
}
