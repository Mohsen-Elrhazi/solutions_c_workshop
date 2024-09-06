#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char chaine[40];
   printf("Entrerr la  chaine: ");
   gets(chaine);
   printf("la chaine inverse est: %s",strrev(chaine));

    return 0;
}
