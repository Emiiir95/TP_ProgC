#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int total_bits = sizeof(unsigned int) * 8;   
    int i;
    int started = 0;  

    if (n == 0) {
        printf("0");
        return;
    }

    for (i = total_bits - 1; i >= 0; i--) {
        unsigned int masque = 1u << i;

        if (n & masque) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }
}

int main(void) {
    unsigned int valeurs[] = {0u, 4096u, 65536u, 65535u, 1024u};
    int nb_valeurs = sizeof(valeurs) / sizeof(valeurs[0]);
    int i;

    for (i = 0; i < nb_valeurs; i++) {
        printf("%6u en binaire = ", valeurs[i]);
        afficher_binaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
