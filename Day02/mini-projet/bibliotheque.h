// bibliotheque.h
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

void Ajouter(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int nbrlivres);
void Afficher(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int nbrlivres);
void RechercherLivre(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int nbrlivres, char titreliv[40]);
void ModifierQuantite(char Titre[][40], int Quantite[], int nbrlivres, char titreliv[40]);
void SupprimerLivre(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int *nbrlivres, char titreliv[40]);
void Trie(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int nbrlivres);
void NombreLivres(char Titre[][40], char Auteur[][40], float Prix[], int Quantite[], int nbrlivres);

#endif
