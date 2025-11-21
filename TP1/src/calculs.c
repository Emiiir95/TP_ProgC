#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '+';

    int resultat;

    printf("num1 = %d, num2 = %d, opérateur = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat (addition) : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat (soustraction) : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat (multiplication) : %d\n", resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat (division entière) : %d\n", resultat);
            } else {
                printf("Erreur : division par zéro interdite !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat (modulo) : %d\n", resultat);
            } else {
                printf("Erreur : modulo par zéro interdit !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat (opération ET bit à bit) : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat (opération OU bit à bit) : %d\n", resultat);
            break;

        case '~':
            resultat = ~num1;
            printf("Résultat (négation bit à bit de num1) : %d\n", resultat);
            break;

        default:
            printf("Erreur : opérateur inconnu '%c'\n", op);
            break;
    }

    return 0;
}
