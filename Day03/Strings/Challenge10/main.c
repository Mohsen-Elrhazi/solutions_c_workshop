#include <stdio.h>
#include <stdlib.h>


void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char chaine[40];
  char souschaine[40];
  int i,nbr=0;

   printf("Entrer la  chaine: ");
  fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

   printf("entrer la sous-chaine a chercher: ");
   //scanf("%s",&souschaine);
     fgets(souschaine, sizeof(souschaine), stdin);
    souschaine[strcspn(souschaine, "\n")] = '\0';

   to_lowercase(chaine);
   to_lowercase(souschaine);

   if(strstr(chaine,souschaine)!=NULL)
    printf("la sous-chaine %s se trouve dans la chaine principal",souschaine);
   else
    printf("la sous-chaine %s ne se trouve pas dans la chaine principal",souschaine);
}
