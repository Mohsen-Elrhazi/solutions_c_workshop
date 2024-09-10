#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Contact.h"

int main()
{
    while(1){
    printf("\n-------------MENU------------\n");
     printf("Que souhaitez vous faire:\n");
    printf("1:Ajouter un Contact\n");
    printf("2:Modifier un Contact \n");
    printf("3:Supprimer un Contact\n");
    printf("4:Afficher Tous les Contacts\n");
    printf("5:Rechercher un Contact\n");
    printf("6:Trier les Contacts\n");
    printf("7:Quitter le programme\n");
    printf("entrer votre choix: ");
    scanf("%d",&choix);
    printf("-------------------------------\n");
    switch(choix){
    case 1:
        if (n==0){
        c=calloc(n=1,sizeof(Contact));
        Ajouter(c,n);
        }
        else {
        n+=1;
            c=realloc(c,n*sizeof(Contact));
            Ajouter(c,n);
        }
       break;
    case 2:
       printf("entrer le nom du contact a modifier: ");
           scanf("%s",&nom);
           modifier(c,&n,&nom);
       break;
    case 3: printf("entrer le nom du contact a supprimer: ");
           scanf("%s",&nom);
           supprimer(c,&n,&nom);
       break;
    case 4: Afficher(c,&n);
       break;
    case 5: printf("entrer le nom du contact a rechercher: ");
           scanf("%s",&nom);
           rechercher(c,&n,&nom);
       break;
    case 6:trie(c,n);
       break;
    case 7: printf("---------------Fin de programme1 !--------------- ");
          return 0;
          break;
    default : printf("le type de choix est incorrect\n");
       break;
    }
    }
    free(c);
    return 0;
}
