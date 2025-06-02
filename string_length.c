#include <stdio.h>

int main() {
    char c;              // Une lettre qu'on va lire
    int longueur = 0;    // Compteur pour compter les lettres

    // Lire chaque lettre jusqu'à ce qu'on appuie sur Entrée
    while ((c = getchar()) != '\n') {
        longueur = longueur + 1; // On ajoute 1 pour chaque lettre lue
    }

    // Afficher le nombre de lettres
    printf("Longueur de la chaîne : %d\n", longueur);

    return 0;
}
