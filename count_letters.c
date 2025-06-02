#include <stdio.h>
#include <ctype.h>  // pour tolower() et isalpha()

int main() {
    char str[200];
    int voyelles = 0, consonnes = 0;

    // Lire la ligne entrée directement sans afficher de message
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);

        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    // Affichage propre comme demandé
    printf("Voyelles : %d, Consonnes : %d\n", voyelles, consonnes);
    return 0;
}
