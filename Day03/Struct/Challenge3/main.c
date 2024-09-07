#include <stdio.h>
#include <stdlib.h>

typedef struct Rectangle{
    float longeur;
    float largeur;
}Rectangle;

float calculerAire(Rectangle r){
    return r.longeur*r.largeur ;
}


int main()
{
    Rectangle rec;

    printf("entrer la longueur du rectangle: ");
    scanf("%f",&rec.longeur);

    printf("entrer la largeur du rectangle: ");
    scanf("%f",&rec.largeur);

    printf("l'aire de rectangle est: %.2f\n",calculerAire(rec));
    return 0;
}
