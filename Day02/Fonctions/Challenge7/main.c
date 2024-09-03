#include <stdio.h>
#include <stdlib.h>


void InverseChaine(char chaine[]){
    printf("%s",strrev(chaine));
}
int main()
{
    char texte[20];
    printf("entrer le texte:");
    gets(texte);
    InverseChaine(texte);
    return 0;
}

