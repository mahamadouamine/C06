#include <stdio.h>

int main() {
    char c;                    // Pour stocker chaque caractère
    int voyelles = 0;          // Compteur de voyelles
    int consonnes = 0;         // Compteur de consonnes

    printf("Écris une phrase :\n");

    // Lire chaque caractère jusqu'à Entrée (fin de ligne)
    while ((c = getchar()) != '\n') {
        // Si c'est une lettre majuscule, on la transforme en minuscule
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Vérifie si c'est une lettre (a à z)
        if (c >= 'a' && c <= 'z') {
            // Vérifie si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles = voyelles + 1;
            } else {
                consonnes = consonnes + 1;
            }
        }
        // Sinon, on ignore (espaces, chiffres, ponctuation...)
    }

    // Affiche les résultats
    printf("Voyelles : %d, Consonnes : %d\n", voyelles, consonnes);

    return 0;
}
