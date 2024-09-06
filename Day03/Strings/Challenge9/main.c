#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texte[100];
    int i ,espace=0, nbr_mot;
    char help[100];
    printf("entrer le texte: ");
    gets(texte);
    for(i=0;i<=strlen(texte);i++){
      if(texte[i]==' '){
        strcpy(help,texte[i]);
        strcpy(texte[i],texte[i+1]);
        strcpy(texte[i+1],help);
      }
    }
    printf("texte sans espace: %s",texte);
    return 0;
}
