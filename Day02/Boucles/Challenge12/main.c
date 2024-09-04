#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("entrez le nombre d'elements du tableau : ");
    scanf("%d",&n);

    int T[n];

    // Saisie des éléments du tableau
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // Tri par bulles
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (T[j] > T[j+1]) {
                temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trie :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
