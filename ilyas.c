#include <stdio.h>

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Vérifie si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}

