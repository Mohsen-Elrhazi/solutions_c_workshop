#include <stdio.h>
#include <stdlib.h>

int minimum(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}

int main()
{
    int a,b;
    printf("entrer la valeau de a: ");
    scanf("%d",&a);
    printf("entrer la valeau de b: ");
    scanf("%d",&b);
    printf("le min est: %d",minimum(a,b));
    return 0;
}
