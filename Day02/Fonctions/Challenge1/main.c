#include <stdio.h>
#include <stdlib.h>

int somme(int x,int y){
 int s;
 s=x+y;
 return s;
}

int main()
{
int a,b;
printf("entrer la valeau de a: ");
scanf("%d",&a);
printf("entrer la valeau de b: ");
scanf("%d",&b);
printf("la somme est: %d",somme(a,b));

    return 0;
}
