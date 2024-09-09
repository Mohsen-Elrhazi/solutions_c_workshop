#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bibliotheque.h"


// Définition des variables globales
char Titre[40][40];
char Auteur[40][40];
float Prix[40];
int Quantite[40];
int nbrlivres ;
char titreliv[40];


 /*-----------Ajouter un livre au stock----------- */
 void Ajouter(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int nbrlivres){
     int i;
     for(i=0;i<nbrlivres;i++){
        printf("entrer les infos de livre: %d\n",i+1);
        printf("Entrer le titre: ");
        scanf("%s",Titre[i]);
        printf("Entrer l'auteur: ");
        scanf("%s",Auteur[i]);
        printf("Entrer le prix: ");
        scanf("%f",&Prix[i]);
        printf("Entrer la quantite: ");
        scanf("%d",&Quantite[i]);
    }
}

/*-----------Afficher tous les livres disponibles-----------*/
void Afficher(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int nbrlivres){
    int i;
    if(nbrlivres==0)
        printf("Aucun livre disponible.\n");
    else{
        for(i=0;i<nbrlivres;i++){
        printf("les infos de livres %d sont:\n",i+1);
        printf("Titre:%s \n",Titre[i]);
        printf("Auteur:%s\n",Auteur[i]);
        printf("Prix:%.2f\n",Prix[i]);
        printf("Quantite:%d\n",Quantite[i]);
        }
    }
}

   /*-----------Rechercher un livre par son titre.----------- */
  void RechercherLivre(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int nbrlivres,char titreliv[40]){
      // char titreliv[30];
       int i,pos,trv=0;;
        for(i=0;i<nbrlivres;i++){
        if(strcasecmp(Titre[i],titreliv)==0){
                trv=1;
                pos=i;
                break;
        }
        }
     if(trv==0){
        printf("Livre non trouve.\n");
     }
     else{
        printf("Livre est trouve.\n");
      // Afficher(&Titre[pos],&Auteur[pos],&Prix[pos],&Quantite[pos],1);
        printf("les infos de livres %d sont:\n",pos+1);
        printf("Titre:%s \n",Titre[pos]);
        printf("Auteur:%s\n",Auteur[pos]);
        printf("Prix:%f\n",Prix[pos]);
        printf("Quantite:%d\n",Quantite[pos]);
     }
}

  /*-----------Mettre à jour la quantité d'un livre----------- */
  void ModifierQuantite(char Titre[][40],int Quantite[],int nbrlivres,char titreliv[40]){
     // char titreliv[30];
      int i,pos,trv=0;

    for(i=0;i<nbrlivres;i++){
        if(strcasecmp(Titre[i],titreliv)==0){
                pos=i;
                trv=1;
                break;
        }
    }
     if(trv==0){
        printf("Livre non trouve.\n");
     }
     else{
         printf("entrer la nouvelle quantite:");
         scanf("%d",&Quantite[pos]);
         printf("la quantite a ete modifier\n");
     }
  }

  /*----------- Supprimer un live de stock----------- */
   void SupprimerLivre(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int *nbrlivres,char titreliv[40]){
      // char titreliv[30];
       int i,pos,trv=0;

    for(i=0;i< *nbrlivres;i++){
        if(strcasecmp(Titre[i],titreliv)==0){
                pos=i;
                trv=1;
                break;
        }
    }

    if (trv == 0) {
        printf("Livre non trouve.\n");
        return;
    }
    else{
      for(i=pos;i< *nbrlivres;i++){
            strcpy(Titre[i],Titre[i+1]);
            strcpy(Auteur[i],Auteur[i+1]);
            Prix[i]=Prix[i+1];
            Quantite[i]=Quantite[i+1];
       }
    (*nbrlivres)--;
    printf("le livre a ete supprimer\n");
    }
   }

    /*----------- Trier les livres----------- */
    void Trie(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int nbrlivres){
        int i,j;
        char helpTitre[40], helpAuteur[40],helpPrix, helpQuantite;
        for(i=0;i< nbrlivres;i++){
            for(j=i+1;j< nbrlivres;j++){
              if(strcasecmp(Titre[i],Titre[j])>0){
                // Echange des titres
                strcpy(helpTitre, Titre[i]);
                strcpy(Titre[i], Titre[j]);
                strcpy(Titre[j], helpTitre);

                // Echange des auteurs
                strcpy(helpAuteur, Auteur[i]);
                strcpy(Auteur[i], Auteur[j]);
                strcpy(Auteur[j], helpAuteur);

                // Echange des prix
                helpPrix = Prix[i];
                Prix[i] = Prix[j];
                Prix[j] = helpPrix;

                // Echange des quantités
                helpQuantite = Quantite[i];
                Quantite[i] = Quantite[j];
                Quantite[j] = helpQuantite;

                    }
            }
        }
        printf("Les livres sont tries.\n");
    }


   /*-----------Nombre total de livres----------- */
   void NombreLivres(char Titre[][40],char Auteur[][40],float Prix[],int Quantite[],int nbrlivres){
       int i,s;
       s=0;
       for(i=0;i< nbrlivres;i++){
            s+=Quantite[i];
       }
    printf("nombre total de livres en stock est:%d\n",s);
   }
