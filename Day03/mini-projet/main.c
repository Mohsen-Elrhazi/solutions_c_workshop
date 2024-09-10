#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Contrat.h"

int main()
{
  printf("Entrer le nombre initial de contrats: ");
    scanf("%d",&n);
    c=calloc(n,sizeof(Contrat));
     Ajouter(c,n);


    while(1){
    printf("------------MENU-----------\n");
     printf("\nQue souhaitez vous faire:\n");
    printf("1:Ajouter un Contact\n");
    printf("2:Modifier un Contact \n");
    printf("3:Supprimer un Contact\n");
    printf("4:Afficher Tous les Contacts\n");
    printf("5:Rechercher un Contact\n");
    printf("6:Trier les Contacts\n");
    printf("7:Quitter le programme\n");
    printf("entrer votre choix: ");
    scanf("%d",&choix);
    switch(choix){
    case 1:
        n+=1;
            c=realloc(c,n*sizeof(Contrat));
           for(p=c+(n-1);p<c+n;p++){
            printf("Entrer les infos de contrat %d:\n",p-c+1);
            printf("Entrer le nom: ");
            scanf("%s",&p->nom);
            printf("Entrer le numero de telephone: ");
            scanf("%s",&p->numero_telephone);
            printf("Entrer l'adresse email: ");
            scanf("%s",&p->adresse_email);
            }


       break;
    case 2: printf("entrer le nom du contrat a modifier: ");
           scanf("%s",&nom);
           modifier(c,&n,&nom);
       break;
    case 3: printf("entrer le nom du contrat a supprimer: ");
           scanf("%s",&nom);
           supprimer(c,&n,&nom);
       break;
    case 4: Afficher(c,&n);
       break;
    case 5: printf("entrer le nom du contrat a rechercher: ");
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
}
