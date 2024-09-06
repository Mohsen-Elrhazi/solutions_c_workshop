#include <stdio.h>
#include <string.h>

int main()
{
    char texte[30];
    int i,taille=0 ;
    printf("entrer le texte: ");
    gets(texte);
    for(i=0;texte[i]!='\0';i++){
        taille++ ;
    }
    printf("la taille de la chaine est: %d \n",taille);
    return 0;

}
