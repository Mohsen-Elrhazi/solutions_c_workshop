#include <stdio.h>
#include <stdlib.h>

int produit(int x, int y){
return x*y;
}

int main()
{
    int a,b;
    printf("entrer la valeau de a: ");
    scanf("%d",&a);
    printf("entrer la valeau de b: ");
    scanf("%d",&b);
    printf("le produit est: %d",produit(a,b));
    return 0;
}
