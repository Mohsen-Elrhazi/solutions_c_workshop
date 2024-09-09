#include <stdio.h>
#include <stdlib.h>

int main()
{
   char chaine1[40];
   char chaine2[40];

   printf("Entrerr la  chaine 1: ");
   gets(chaine1);

   printf("Entrerr la  chaine 2: ");
   gets(chaine2);

   if(strcasecmp(chaine1,chaine2)==0)
    printf("les chaines sont egales");
    else
        printf("les chaines sont differents");


    return 0;
}
