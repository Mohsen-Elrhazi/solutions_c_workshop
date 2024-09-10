#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Contrat.h"

// Definition des variables globales
 Contrat *c;
 Contrat *p,*p1,*p2;
 int n, choix;
 char nom[30];

/*-----------Ajouter un Contact-----------*/
void Ajouter(Contrat *c,int n){
    Contrat *p;
    for(p=c;p<c+n;p++){
     printf("Entrer les infos de contrat %d:\n",p-c+1);
    printf("Entrer le nom: ");
    scanf("%s",&p->nom);
    printf("Entrer le numero de telephone: ");
    scanf("%s",&p->numero_telephone);
    printf("Entrer l'adresse email: ");
    scanf("%s",&p->adresse_email);
    }
}



/*-----------Afficher les Contacts-----------*/
void Afficher(Contrat *c,int *n){
    if (*n==0){
        printf("Aucune contrat disponible.\n");
    }
    else {
    for(p=c;p<c+*n;p++){
    printf("Contrat %d: Nom: %s | Telephone: %s | Email: %s\n",p-c+1,p->nom,p->numero_telephone,p->adresse_email);
    }
    }
}

/*-----------modifier les Contacts-----------*/
void modifier(Contrat *c, int *n,  char *nom) {
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            printf("Entrer le nouveau numero de telephone: ");
            scanf("%s",&p->numero_telephone);
            printf("Entrer la nouvelle adresse email: ");
            scanf("%s",&p->adresse_email);
            printf("Le numero et l'email ont ete modifies.\n");
        }
    }
    printf("Le contrat n'a pas ete trouve.\n");
}


/*-----------Supprimer un Contact-----------*/
void supprimer(Contrat *c,int *n,char *nom){
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
        printf("le contrat a ete supprime.\n");
    }
        else{
            printf("Le contrat n'a pas ete trouve.\n");
        }
}

/*-----------Rechercher un Contact-----------*/
void rechercher(Contrat *c,int *n,char *nom){
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
               // Afficher(p,1);
              trv=1;
              printf("Contrat %d: Nom: %s | Telephone: %s | Email: %s\n",p-c+1,p->nom,p->numero_telephone,p->adresse_email);
            break;
        }
    }

    if(trv==0)
            printf("Le contrat n'a pas ete trouve.\n");
}

/*-----------Trie par nom-----------*/

void trie(Contrat *c,int n){
    Contrat *p1,*p2;
    Contrat help;
    for(p1=c;p1<c+(n-1);p1++){
        for(p2=p1+1;p2<c+n;p2++){
        if(strcmp(p1->nom,p2->nom)>0){
           help=*p1;
           *p1=*p2;
           *p2=help;
        }
        }
    }
    printf("Les contrats sont tries.\n");
}
