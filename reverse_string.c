#include <stdio.h>    // Pour les fonctions printf, fgets, putchar
#include <string.h>   // Pour strlen et strcspn

int main() {
    char chaine[100];  // Déclaration d'un tableau pour stocker la chaîne (max 99 caractères + '\0')

    // Lecture de la chaîne avec protection de taille
    fgets(chaine, sizeof(chaine), stdin);  

    // Suppression du caractère '\n' si présent (ajouté par fgets quand l'utilisateur appuie sur Entrée)
    chaine[strcspn(chaine, "\n")] = '\0';
    //chaine = {'h', 'e', 'l', 'l', 'o', '\n', '\0'};

    // Calcul de la longueur réelle de la chaîne (sans le '\0')
    int longueur = strlen(chaine);

    printf("Chaîne inversée : ");

    // Boucle allant de la fin de la chaîne vers le début
    for (int i = longueur - 1; i >= 0; i--) {
        putchar(chaine[i]);  // Affiche un caractère à la fois
    }

    printf("\n");

    return 0;  // Fin du programme
}
