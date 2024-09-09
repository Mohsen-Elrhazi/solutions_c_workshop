#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char chaine[40];
    int i;

   printf("Entrer la  chaine: ");
   gets(chaine);

    //1ere methode qui affiche caractere par caractere de la fin jusqu'a le debut
     printf("la chaine inverse est: ");
   for(i=strlen(chaine)-1;i>=0;i--){
   printf("%c",chaine[i]);
 }

   /* 2eme methode par utilisé la fonction strrev qui inverser la chaine
   printf("la chaine inverse est: %s",strrev(chaine));
   */


    return 0;
}


