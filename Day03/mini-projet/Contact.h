
#ifndef CONTRAT_H
#define CONTRAT_H



typedef struct Contact {
    char nom[50];
    char numero_telephone[20];
    char adresse_email[50];
} Contact;

// Declaration des variables globales avec extern
extern Contact *c;
extern Contact *p,*p1,*p2;
extern int n, choix;
extern char nom[30];

void Ajouter(Contact *c, int n);
void Afficher(Contact *c, int *n);
void modifier(Contact *c, int *n, char *nom);
void supprimer(Contact *c, int *n, char *nom);
void rechercher(Contact *c, int *n, char *nom);
void trie(Contact *c, int n);

#endif
