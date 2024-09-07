#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Etudiant {
    char nom[40];
    char prenom[40];
    float note[40];
}Etudiant;


int main()
{
    Etudiant e;
    int nbrnotes, i;
    printf("entrer les infos de l'etudiant:\n");
    printf("entrer le nom: ");
    //scanf("%s",e.nom);
    fgets(e.nom, sizeof(e.nom), stdin);
    e.nom[strcspn(e.nom, "\n")] = '\0';

    printf("entrer le prenom: ");
    //scanf("%s",e.prenom);
    fgets(e.prenom, sizeof(e.prenom), stdin);
    e.prenom[strcspn(e.prenom, "\n")] = '\0';

    printf("entrer nombre des notes de l'etudiant: ");
    scanf("%d",&nbrnotes);
    for(i=0;i<nbrnotes;i++){
        printf("entrer la note %d: ",i+1);
        scanf("%f",&e.note[i]);
    }

    printf("les infos de l'etudiant sont:\n");
    printf("nom: %s\n",e.nom);
    printf("prenom: %s\n",e.prenom);
    for(i=0;i<nbrnotes;i++){
        printf("la note %d: %.2f\n",i+1,e.note[i]);
    }


    return 0;
}
