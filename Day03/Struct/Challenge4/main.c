#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    float x;
    float y;
}Point;

int main()
{
    Point pt;
    Point *p=&pt;

    printf("entrer les coordonnees du point:\n");
    printf("entrer x: ");
    scanf("%f",&p->x);
    printf("entrer y: ");
    scanf("%f",&p->y);

    printf("les coordonnees du point sont:\n");
    printf("x= %.2f\n",p->x);
     printf("y= %.2f\n",p->y);
    return 0;
}
