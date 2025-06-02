#include <stdio.h> // pour printf et fgets

int main() {
    char texte[100];         // Tableau pour stocker le texte entré par l'utilisateur
    char sansEspaces[100];   // Tableau pour stocker le texte sans espaces
    int i = 0, j = 0;        // i pour parcourir texte, j pour remplir sansEspaces

    // Lire une ligne de texte tapée par l'utilisateur
    fgets(texte, sizeof(texte), stdin);

    // Parcourir chaque caractère du texte
    while (texte[i] != '\0') {            // Tant qu'on n'est pas à la fin de la chaîne
        if (texte[i] != ' ' && texte[i] != '\n') {
            // Si le caractère n'est pas un espace ni un retour à la ligne,
            // on le copie dans le tableau sansEspaces
            sansEspaces[j] = texte[i];
            j++; // On passe à la case suivante du tableau sansEspaces
        }
        i++; // On passe au caractère suivant dans texte
    }

    // Fin de la nouvelle chaîne (ajout du caractère nul)
    sansEspaces[j] = '\0';

    // Afficher le résultat sans les espaces
    printf("%s\n", sansEspaces);

    return 0;
}
