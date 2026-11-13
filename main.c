#include <stdio.h>

int main() {
    int a, b, somme;

    // Demander le premier entier
    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    // Demander le deuxième entier
    printf("Entrez le deuxieme entier : ");
    scanf("%d", &b);

    // Calculer la somme
    somme = a + b;

    // Afficher le résultat
    printf("La somme de %d et %d est : %d\n", a, b, somme);

    return 0;
}
