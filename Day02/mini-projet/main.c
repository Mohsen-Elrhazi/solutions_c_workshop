#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char Titre[20][20];
    char Auteur[20][20];
    float Prix[20];
    int Quantite[20];

    int nbrlivres, i;
    char titreliv[40];

    printf("entrer nombre de livres:");
    scanf("%d",&nbrlivres);

    /* Ajouter un livre au stock */
    for(i=0;i<nbrlivres;i++){
        printf("entrer les infos de livre: %d\n",i+1);
        printf("entrer le titre: ");
        scanf("%s",Titre[i]);
        printf("entrer l'auteur: ");
        scanf("%s",Auteur[i]);
        printf("entrer le prix: ");
        scanf("%f",&Prix[i]);
        printf("entrer le Quantite: ");
        scanf("%d",&Quantite[i]);
    }

    /* afficher tous les livres disponibles */
    for(i=0;i<nbrlivres;i++){
        printf("les infos de livres %d sont:\n",i+1);
        printf("Titre:%s \n",Titre[i]);
        printf("Auteur:%s\n",Auteur[i]);
        printf("Prix:%f\n",Prix[i]);
        printf("Quantite:%d\n",Quantite[i]);
    }
    /* modif la quantite d'un livre*/
    printf("quel titre de livre vous voulez modifier: ");
    scanf("%s",titreliv);
    for(i=0;i<nbrlivres;i++){
        if(strcmp(Titre[i],titreliv)==0){
            printf("entrer la nouvelle quantite:");
            scanf("%d",&Quantite[i]);
            printf("la quantite a ete modifier\n");
        }
    }

    /* afficher tous les livres disponibles */
    for(i=0;i<nbrlivres;i++){
        printf("les infos de livres %d sont:\n",i+1);
        printf("Titre:%s \n",Titre[i]);
        printf("Auteur:%s\n",Auteur[i]);
        printf("Prix:%f\n",Prix[i]);
        printf("Quantite:%d\n",Quantite[i]);
    }

        /* Supprimer un live de stock */
    printf("quel titre de livre vous voulez supprimer: ");
    scanf("%s",titreliv);
    int pos;
    for(i=0;i<nbrlivres;i++){
        if(strcmp(Titre[i],titreliv)==0){
                pos=i;
        }
    }
    for(i=pos;i<nbrlivres;i++){
            strcpy(Titre[i],Titre[i+1]);
            strcpy(Auteur[i],Auteur[i+1]);
            Prix[i]=Prix[i+1];
            Quantite[i]=Quantite[i+1];
    }
    nbrlivres--;
    printf("le livre a ete supprimer\n");
/* afficher tous les livres disponibles */
    for(i=0;i<nbrlivres;i++){
        printf("les infos de livres %d sont:\n",i+1);
        printf("Titre:%s \n",Titre[i]);
        printf("Auteur:%s\n",Auteur[i]);
        printf("Prix:%f\n",Prix[i]);
        printf("Quantite:%d\n",Quantite[i]);
    }

    /* Nmbre total de livres */
    printf("nombre total de livres est:%d",nbrlivres);

    return 0;
}
