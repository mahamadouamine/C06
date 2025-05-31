#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char phrase[100];
    int nbV = 0;
    int nbC = 0;
    // Lecture de la chaîne avec protection de taille
    fgets(phrase, sizeof(phrase), stdin);  
    // Suppression du caractère '\n' si présent (ajouté par fgets quand l'utilisateur appuie sur Entrée)
    phrase[strcspn(phrase, "\n")] = '\0';
   
    // Parcourir chaque caractère de la phrase
    for (int i = 0; phrase[i] != '\0'; i++) {
        char lettre = tolower(phrase[i]);
        // Si la lettre est une voyelle
        if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u') {
            nbV++;
    // Si c’est une lettre (a-z) mais pas une voyelle, alors c’est une consonne
        } else if (lettre >= 'a' && lettre <= 'z') {
            nbC++;
        }
    }
    // Afficher les résultats
    printf("Nombre de voyelles : %d\n", nbV);
    printf("Nombre de consonnes : %d\n", nbC);

    return 0;
}
