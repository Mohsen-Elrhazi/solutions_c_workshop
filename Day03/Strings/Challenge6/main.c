#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
  char chaine[40];
  char caractere;
  int i,nbr=0;

   printf("Entrer la  chaine: ");
   //gets(chaine);
   scanf("%s",chaine);
   printf("entrer le caractere a chercher: ");
   scanf(" %c",&caractere);

   // Convertit les caractères en minuscules pour rendre la comparaison insensible à la casse.
   caractere=tolower(caractere);

   // for(i=0;chaine[i]!='\0';i++) ou  for(i=0;i<strlen(chaine);i++)
   for(i=0;chaine[i]!='\0';i++){
        if(tolower(chaine[i])==caractere)
        nbr++;
   }

   printf("nombre d'occurrence de %c dans la chaine est: %d\n", caractere,nbr);
    return 0;

}
