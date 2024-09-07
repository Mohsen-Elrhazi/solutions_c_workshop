#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Personne {
    char nom[100];
    char prenom[100];
    int age;
}Personne;


int main()
{
    Personne p;

    printf("entrer les infos de la personne:\n");
    printf("entrer le nom: ");
    //scanf("%s",p.nom);
    fgets(p.nom, sizeof(p.nom), stdin);
    p.nom[strcspn(p.nom, "\n")] = '\0';

    printf("entrer le prenom: ");
   // scanf("%s",p.prenom);
   fgets(e.prenom, sizeof(p.prenom), stdin);
    p.prenom[strcspn(p.prenom, "\n")] = '\0';

    printf("entrer l'age: ");
    scanf("%d",&p.age);

    printf("les infos de la personne sont:\n");
    printf("Nom: %s\n",p.nom);
    printf("Prenom: %s\n",p.prenom);
    printf("Age: %d\n",p.age);
    return 0;
}
