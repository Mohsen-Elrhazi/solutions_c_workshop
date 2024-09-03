#include <stdio.h>
#include <stdlib.h>

typedef struct etudiant {
     char nom[20];
     char prenom[20];
     char sexe[20];
     int age;
     char email[40];
}etudiant;

int main()
{
    etudiant et;
    printf("entrer les info d'etudiant:\n");
    printf("entrer le nom: ");
    scanf("%s",&et.nom);
    printf("entrer le prenom: ");
    scanf("%s",&et.prenom);
    printf("entrer age: ");
    scanf("%d",&et.age);
    printf("entrer le sexe: ");
    scanf("%s",&et.sexe);
    printf("entrer email: ");
    scanf("%s",&et.email);

    printf(" les informations personnelles d'etu sont:\n");
    printf("%s \n",et.nom);
    printf("%s \n",et.prenom);
    printf("%d\n",et.age);
    printf("%s \n",et.sexe);
    printf("%s \n",et.email);
    /*
    char nom[20], prenom[20],sexe[20],email[40];
    int age;
    printf("entrer le nom: ");
    scanf("%s",&nom);
    printf("entrer le prenom: ");
    scanf("%s",&prenom);
    printf("entrer age: ");
    scanf("%d",&age);
    printf("entrer le sexe: ");
    scanf("%s",&sexe);
    printf("entrer email: ");
    scanf("%s",&email);

    printf("vos informations personnelles sont:\n");
    printf("%s \n",nom);
    printf("%s \n",prenom);
    printf("%d\n",age);
    printf("%s \n",sexe);
    printf("%s \n",email);
    */

    return 0;
}
