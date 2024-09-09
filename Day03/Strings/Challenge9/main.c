#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char texte[100];
    int i, j = 0;

    printf("Entrer le texte : ");
    fgets(texte, sizeof(texte), stdin);
    texte[strcspn(texte, "\n")] = '\0';

    for (i = 0; texte[i] != '\0'; i++) {
        if (texte[i] != ' ') {
            texte[j++] = texte[i];
        }
    }
    texte[j] = '\0';

    printf("texte sans espaces : %s\n", texte);

    return 0;
}
