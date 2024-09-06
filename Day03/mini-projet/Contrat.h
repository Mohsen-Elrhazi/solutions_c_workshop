#ifndef CONTRAT_H
#define CONTRAT_H


typedef struct Contrat {
    char nom[50];
    char numero_telephone[20];
    char adresse_email[50];
} Contrat;

void Ajouter(Contrat *c, int n);
void Afficher(Contrat *c, int *n);
void modifier(Contrat *c, int *n, char *nom);
void supprimer(Contrat *c, int *n, char *nom);
void rechercher(Contrat *c, int *n, char *nom);
void trie(Contrat *c, int n);

#endif
