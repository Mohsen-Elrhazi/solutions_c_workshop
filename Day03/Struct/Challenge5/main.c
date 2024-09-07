#include <stdio.h>
#include <stdlib.h>

typedef struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
}Livre;

/* 1er methode
void creerLivre(Livre *liv){
    printf("entrer les infos de livre:\n");
    printf("entrer le titre:");
    fgets(liv->titre, sizeof(liv->titre), stdin);
    liv->titre[strcspn(liv->titre, "\n")] = '\0';

    printf("entrer l'auteur: ");
    fgets(liv->auteur, sizeof(liv->auteur), stdin);
    liv->nom[strcspn(liv->auteur, "\n")] = '\0';

    printf("entrer l'annee:");
    scanf("%d",&liv->annee);
}

void afficherLivre(Livre *liv){
    printf("les infos de livre sont:\n");
    printf("Titre: %s\n",liv->titre);
    printf("Auteur: %s\n",liv->auteur);
    printf("Annee: %d",liv->annee);
}
*/

//2eme methode
Livre creerLivre(const char *titre, const char *auteur, int annee) {
    Livre livre;
    strncpy(livre.titre, titre, sizeof(livre.titre) - 1);
    livre.titre[sizeof(livre.titre) - 1] = '\0';

    strncpy(livre.auteur, auteur, sizeof(livre.auteur) - 1);
    livre.auteur[sizeof(livre.auteur) - 1] = '\0';

    livre.annee = annee;
    return livre;
}

int main()
{
    /* 1er methode
    Livre l ;
    creerLivre(&l);
    afficherLivre(&l);
    */

    //2eme methode
     Livre liv = creerLivre("La boite a merveilles", "Ahmed Sefrioui", 1954);

    // Affichage des informations du livre
    printf("Titre : %s\n", liv.titre);
    printf("Auteur : %s\n", liv.auteur);
    printf("Annee : %d\n", liv.annee);

    return 0;
}
