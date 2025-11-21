#include <stdio.h>

void triangle_for(int compteur) {
    int ligne, col;
    
    if (compteur <= 0 || compteur >= 10) {
        printf("La valeur de compteur doit être > 0 et < 10.\n");
        return;
    }

    printf("=== Triangle avec boucles for (compteur = %d) ===\n\n", compteur);

    for (ligne = 1; ligne <= compteur; ligne++) {
        for (col = 1; col <= ligne; col++) {
            char ch;

            if (ligne == 1 || ligne == compteur) {
                ch = '*';
            } else {
                if (col == 1 || col == ligne) {
                    ch = '*';
                } else {
                    ch = '#';
                }
            }
            printf("%c ", ch);
        }
        printf("\n");
    }

    printf("\n");
}

void triangle_while(int compteur) {
    int ligne, col;

    if (compteur <= 0 || compteur >= 10) {
        printf("La valeur de compteur doit être > 0 et < 10.\n");
        return;
    }

    printf("=== Triangle avec boucles while (compteur = %d) ===\n\n", compteur);

    ligne = 1;
    while (ligne <= compteur) {
        col = 1;
        while (col <= ligne) {
            char ch;

            if (ligne == 1 || ligne == compteur) {
                ch = '*';
            } else {
                if (col == 1 || col == ligne) {
                    ch = '*';
                } else {
                    ch = '#';
                }
            }

            printf("%c ", ch);
            col++;
        }
        printf("\n");
        ligne++;
    }

    printf("\n");
}

int main(void) {
    int compteur = 5; 

    triangle_for(compteur);
    triangle_while(compteur);

    return 0;
}
