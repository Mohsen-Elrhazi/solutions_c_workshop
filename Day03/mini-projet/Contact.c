#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Contact.h"

// Definition des variables globales
 Contact *c;
 Contact *p,*p1,*p2;
 int n, choix;
 char nom[30];

/*-----------Ajouter un Contact-----------*/
void Ajouter(Contact *c,int n){
    //for(p=c;p<c+n;p++){
     p = c + (n - 1);
     printf("Entrer les infos de contact %d:\n",p-c+1);
    printf("Entrer le nom: ");
    scanf("%s",&p->nom);
    printf("Entrer le numero de telephone: ");
    scanf("%s",&p->numero_telephone);
    printf("Entrer l'adresse email: ");
    scanf("%s",&p->adresse_email);
   // }
}



/*-----------Afficher les Contacts-----------*/
void Afficher(Contact *c,int *n){
    if (*n==0){
        printf("Aucune contact disponible.\n");
    }
    else {
    for(p=c;p<c+*n;p++){
    printf("contact %d: Nom: %s | Telephone: %s | Email: %s\n",p-c+1,p->nom,p->numero_telephone,p->adresse_email);
    }
    }
}

/*-----------modifier les Contacts-----------*/
void modifier(Contact *c, int *n,  char *nom) {
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            trv=1;
            p2=p;
            break;
        }
    }
    if(trv==1){
        printf("Entrer le nouveau numero de telephone: ");
            scanf("%s",&p2->numero_telephone);
            printf("Entrer la nouvelle adresse email: ");
            scanf("%s",&p2->adresse_email);
            printf("Le numero et l'email ont ete modifies.\n");
    }
    else
    printf("Le contact n'a pas ete trouve.\n");
}



/*-----------Supprimer un Contact-----------*/
void supprimer(Contact *c,int *n,char *nom){
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            trv=1;
            p2=p;
            break;
        }
    }
    if(trv==1){
            for(p=p2;p<c+*n;p++){
                    *p=*(p+1);
                }
            *n-=1;
        printf("le contact a ete supprime.\n");
    }
        else{
            printf("Le contact n'a pas ete trouve.\n");
        }
}

/*-----------Rechercher un Contact-----------*/
void rechercher(Contact *c,int *n,char *nom){
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
              printf("contact %d: Nom: %s | Telephone: %s | Email: %s\n",p-c+1,p->nom,p->numero_telephone,p->adresse_email);
           return;
        }
    }

            printf("Le contact n'a pas ete trouve.\n");
}

/*-----------Trie par nom-----------*/
void trie(Contact *c, int n) {
    Contact help;
    if(n==0){
        printf("Aucune contrat disponible.\n");
        return ;
    }
     printf("1:Trie par nom\n");
    printf("2:Trie par numero telephone\n");
    printf("3:Trie par email\n");
    printf("Entrer votre choix de trie: ");
    scanf("%d",&choix);

     if (choix < 1 || choix > 3) {
        printf("Le type de choix est incorrect.\n");
        return;
    }

    for ( p1 = c; p1 < c + (n - 1); p1++) {
        for ( p2 = p1 + 1; p2 < c + n; p2++) {
            int comparer = 0;

            if (choix == 1) {
                comparer = strcasecmp(p1->nom, p2->nom);
            } else if (choix == 2) {
                comparer = strcmp(p1->numero_telephone, p2->numero_telephone);
            } else if (choix == 3) {
                comparer = strcmp(p1->adresse_email, p2->adresse_email);
            }

            if (comparer > 0) {
                help = *p1;
                *p1 = *p2;
                *p2 = help;
            }
        }
    }
    printf("Les contacts ont ete tries.\n");
}


