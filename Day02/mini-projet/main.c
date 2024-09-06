#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  // Pour strcasecmp
#include "bibliotheque.h"



int main()
{
    int i, choix;

    printf("entrer nombre de livres:");
    scanf("%d",&nbrlivres);

    while(1){
        printf("\n---------------MENU---------------\n");
        printf("\nQue souhaitez vous faire:\n");
        printf("1:Ajouter un livre au stock\n");
        printf("2:Afficher tous les livres disponibles\n");
        printf("3:Rechercher un livre par son titre.\n");
        printf("4:Mettre a jour la quantita d'un livre\n");
        printf("5:Supprimer un livre du stock\n");
        printf("6:Afficher le nombre total de livres en stock\n");
        printf("7:Tries les livres par le titre\n");
        printf("8:Quitter le programme\n");
        scanf("%d",&choix);
        switch(choix){
            case 1:Ajouter(Titre,Auteur,Prix,Quantite,nbrlivres);
                  break;
            case 2:Afficher(Titre,Auteur,Prix,Quantite,nbrlivres);
                  break;
            case 3:printf("Quel titre de livre  souhaitez-vous rechercher: ");
                   scanf("%s",titreliv);
                   RechercherLivre(Titre,Auteur,Prix,Quantite,nbrlivres,titreliv);
                  break;
            case 4:printf("Quel titre de livre  souhaitez-vous modifier: ");
                   scanf("%s",titreliv);
                   ModifierQuantite(Titre,Quantite,nbrlivres,titreliv);
                  break;
            case 5: printf("Quel titre de livre  souhaitez-vous supprimer: ");
                    scanf("%s",titreliv);
                   SupprimerLivre(Titre,Auteur,Prix,Quantite,&nbrlivres,titreliv);
                  break;
            case 6:NombreLivres(Titre,Auteur,Prix,Quantite,nbrlivres);
                  break;
            case 7:Trie(Titre,Auteur,Prix,Quantite,nbrlivres);
                  break;
            case 8:printf("---------------Fin de programme1 !--------------- ");
                 return 0;
                  break;
            default: printf("Le type de choix est incorrect.\n");
            break;
        }
    }
    return 0;
}
