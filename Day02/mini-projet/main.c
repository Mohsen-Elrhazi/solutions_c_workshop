#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  // Pour strcasecmp


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
                // Échange des titres
                strcpy(helpTitre, Titre[i]);
                strcpy(Titre[i], Titre[j]);
                strcpy(Titre[j], helpTitre);

                // Échange des auteurs
                strcpy(helpAuteur, Auteur[i]);
                strcpy(Auteur[i], Auteur[j]);
                strcpy(Auteur[j], helpAuteur);

                // Échange des prix
                helpPrix = Prix[i];
                Prix[i] = Prix[j];
                Prix[j] = helpPrix;

                // Échange des quantités
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
    printf("nombre total de livres est:%d\n",nbrlivres);
   }

int main()
{
    char Titre[40][40];
    char Auteur[40][40];
    float Prix[40];
    int Quantite[40];

    int nbrlivres, i;
    char titreliv[40];
    int choix;

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
