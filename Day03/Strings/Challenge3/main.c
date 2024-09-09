#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char chaine1[40];
   char chaine2[40];
   char chaine3[40];

   printf("Entrer la  chaine 1: ");
   gets(chaine1);

   printf("Entrer la  chaine 2: ");
   gets(chaine2);

   strcpy(chaine3,strcat(chaine1,chaine2));
   printf("la chaine complet est: %s",chaine3);

    return 0;
}
