#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int scoreJoueur = 0;
    int scoreOrdi = 0;
    int manche = 1;
    int choixJoueur;
    int choixOrdi;

    printf("=== PIERRE, FEUILLE, CISEAUX, LEZARD, SPOCK (7 Manches / avantage décisif de 2) ===\n");
    while (manche <= 7 
        && scoreJoueur-scoreOrdi < 2 
        && scoreOrdi-scoreJoueur < 2)
    {
        printf("--- Manche %d/7 ---\n", manche);

        // Saisie du joueur
        bool incorrect;

        do
        {
            printf("Choix (1 = Pierre, 2 = Feuille, 3 = Ciseaux, 4 = Lézard, 5 = Spock) :");

            scanf("%d", &choixJoueur);
            incorrect = choixJoueur < 1 || 5 < choixJoueur;
            if(incorrect) {
                printf("Non valide, valeurs de 1 à 5 acceptées\n");
            }
        } while (incorrect);

        // Choix aléatoire de l'ordinateur (1, 2, 3, 4 ou 5)
        choixOrdi = (rand() % 5) + 1;
        printf("L'ordinateur a choisi : %d\n", choixOrdi);