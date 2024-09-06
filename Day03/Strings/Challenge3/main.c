#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char chaine1[40];
   char chaine2[40];
   printf("Entrerr la  chaine 1: ");
   gets(chaine1);
   printf("Entrerr la  chaine 2: ");
   gets(chaine2);
   printf("la chaine complet est: %s",strcat(chaine1,chaine2));

    return 0;
}
