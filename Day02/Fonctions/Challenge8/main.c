#include <stdio.h>
#include <stdlib.h>

int parite(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    int p;
    printf("entrer la valeur de a: ");
    scanf("%d",&a);
    p=parite(a);
    if(p==1)
        printf("%d est pair",a);
    else
        printf("%d est impair",a);
    return 0;
}
