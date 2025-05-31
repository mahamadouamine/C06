#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char phrase[100];
    int nbV = 0;
    int nbC = 0;
    int dejaVu[26] = {0}; // 0 = pas encore vue, 1 = déjà vue (pour a-z)

    // Lecture de la chaîne avec protection
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0'; // suppression du '\n' à la fin

    // Parcourir chaque caractère
    for (int i = 0; phrase[i] != '\0'; i++) {
        char lettre = tolower(phrase[i]); // mise en minuscule

        // Vérifier si c’est une lettre entre a et z
        if (lettre >= 'a' && lettre <= 'z') {
            int index = lettre - 'a'; // exemple : 'b' - 'a' = 1

            // Si on n’a pas encore compté cette lettre
            if (dejaVu[index] == 0) {
                dejaVu[index] = 1; // Marquer comme vue

                // Si c’est une voyelle
                if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u') {
                    nbV++;
                } else {
                    nbC++;
                }
            }
        }
    }

    // Affichage final
    printf("Nombre de voyelles : %d\n", nbV);
    printf("Nombre de consonnes : %d\n", nbC);

    return 0;
}
