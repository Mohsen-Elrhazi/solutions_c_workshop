#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Contrat.h"

// Definition des variables globales
 Contrat *c;
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
    Contrat *p;
    if (*n==0){
        printf("Aucune contrat disponible.\n");
    }
    else {
    for(p=c;p<c+*n;p++){
     printf("les infos de contrat %d:\n",p-c+1);
    printf("nom: %s\n",&p->nom);
    printf("numero telephone: %s\n",&p->numero_telephone);
    printf("adresse email: %s\n",&p->adresse_email);
    }
    }
}

/*-----------modifier les Contacts-----------*/
void modifier(Contrat *c,int *n,char *nom){
    Contrat *p, *p2;
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            trv=1;
            p2=p;
            break;
        }
    }
    if(trv==0){
        printf("le contrat non trouve.\n");
    }
        else{
            printf("entrer le nouveau numero de telephone: ");
            scanf("%s",&p2->numero_telephone);
            printf("entrer la nouvelle adresse email: ");
            scanf("%s",&p2->adresse_email);
            printf("Le numero et l'email ont ete modifies.\n");
        }
    }

/*-----------Supprimer un Contact-----------*/
void supprimer(Contrat *c,int *n,char *nom){
    Contrat *p,*p2;
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            trv=1;
            p2=p;
            break;
        }
    }

    if(trv==0){
        printf("le contrat non trouve.\n");
    }
        else{
                for(p=p2;p<c+*n;p++){
                    *p=*(p+1);
                }
            *n-=1;
        printf("le contrat a ete supprime.\n");
        }
}

/*-----------Rechercher un Contact-----------*/
void rechercher(Contrat *c,int *n,char *nom){
    Contrat *p,*p2;
    int trv=0;
    for(p=c;p<c+ *n;p++){
        if(strcasecmp(p->nom,nom)==0){
            trv=1;
            p2=p;
            break;
        }
    }

    if(trv==0){
        printf("le contrat non trouve.\n");
    }
        else{
                printf("les infos de contrat %d:\n",(p2-c)+1);
                printf("nom: %s\n",&p2->nom);
                printf("numero telephone: %s\n",&p2->numero_telephone);
                printf("adresse email: %s\n",&p2->adresse_email);
        }
}

/*-----------Trie par nom-----------*/

void trie(Contrat *c,int n){
    Contrat *p1,*p2;
    Contrat help;
    for(p1=c;p1<c+n;p1++){
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
