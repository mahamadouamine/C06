#include <stdio.h>

int main() {
    char c; // Une lettre que l'on va lire

    // Lire chaque lettre jusqu'à ce qu'on appuie sur Entrée
    while ((c = getchar()) != '\n') {
        // Si la lettre est entre 'a' et 'z' (minuscule)
        if (c >= 'a' && c <= 'z') {
            c = c - 32; // La transformer en majuscule
        }

        putchar(c); // Afficher la lettre (majuscule ou pas)
    }

    putchar('\n'); // Sauter une ligne à la fin

    return 0;
}
