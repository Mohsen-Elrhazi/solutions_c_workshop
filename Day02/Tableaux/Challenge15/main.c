#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n,m;
        int *PA, *PB,*PC;
    printf("entrer le nombre d'element du tableau A: ");
    scanf("%d",&n);
    int A[n];
    printf("entrer le nombre d'element du tableau B: ");
    scanf("%d",&m);
    int B[m];

    printf("entrer les elements du tableau A:\n ");
    for(PA=A;PA<A+n;PA++){
        printf("A[%d]=",PA-A);
        scanf("%d",PA);
    }

    printf("entrer les elements du tableau B:\n ");
    for(PB=B;PB<B+m;PB++){
        printf("B[%d]=",PB-B);
        scanf("%d",PB);
    }
     int l=n+m;
     int C[l];
     for(PC=C,PA=A;PA<A+n;PC++,PA++){
            *PC=*PA;
     }

     for(PC=C+n,PB=B;PB<B+m;PC++,PB++){
        *PC=*PB;
     }

     printf("apres la fusion:\n");
     for(PC=C;PC<C+l;PC++){
        printf("%d\n",*PC);
     }
    return 0;

    /* int n,m, i;
    printf("entrer le nombre d'element du tableau 1: ");
    scanf("%d",&n);
    int T1[n];
    printf("entrer le nombre d'element du tableau 2: ");
    scanf("%d",&m);
    int T2[m];
    printf("entrer les elements du tableau 1:\n");
    for(i=0;i<n;i++){
        printf("T1[%d]=",i);
        scanf("%d",&T1[i]);
    }

    printf("entrer les elements du tableau 2:\n");
    for(i=0;i<m;i++){
        printf("T2[%d]=",i);
        scanf("%d",&T2[i]);
    }

    int l=n+m;
    int TF[l];
    for(i=0;i<n;i++){
        TF[i]=T1[i];
    }
    int j;
    for(i=taille-n;i<taille;i++){
        TF[i]=T2[i];
    }

    printf("le tableau fusionee:\n");
    for(i=0;i<taille;i++)
        printf("TF[%d]=%d\n",i,TF[i]);

        */
}

