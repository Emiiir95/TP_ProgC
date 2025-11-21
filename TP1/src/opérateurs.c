#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    /* Opérateurs arithmétiques */
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    /* Opérateurs logiques (comparaisons) */
    int egal = (a == b);
    int superieur = (a > b);
    int inferieur = (a < b);
    int different = (a != b);

    printf("===== Opérateurs arithmétiques =====\n\n");
    printf("a = %d, b = %d\n\n", a, b);
    printf("a + b = %d\n", addition);
    printf("a - b = %d\n", soustraction);
    printf("a * b = %d\n", multiplication);
    printf("a / b = %d\n", division);
    printf("a %% b = %d\n\n", modulo);  // %% pour afficher le caractère %

    printf("===== Opérateurs logiques =====\n\n");
    printf("a == b → %d\n", egal);
    printf("a > b → %d\n", superieur);
    printf("a < b → %d\n", inferieur);
    printf("a != b → %d\n", different);

    return 0;
}
