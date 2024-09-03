#include <stdio.h>

// Fonction qui calcule le n-i�me terme de la suite de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Entrez un entier pour obtenir le n-ieme terme de la suite de Fibonacci: ");
    scanf("%d", &n);

    // Affiche le r�sultat
    printf("Le %d-ieme terme de la suite de Fibonacci est: %d\n", n, fibonacci(n));

    return 0;
}
