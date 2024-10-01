#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAXlivres 100

char titres[MAXlivres][100];
char auteurs[MAXlivres][100];
float prix[MAXlivres];
int quantite[MAXlivres];
int contlivre = 0;

void Ajouterlivre() {
    if (contlivre < MAXlivres) {
        printf("Titre: ");
        scanf(" %\^n*c%", titres[contlivre]);
        printf("Auteur: ");
        scanf(" %s", auteurs[contlivre]);
        printf("Prix: ");
        scanf("%f", &prix[contlivre]);
        printf("Quantite: ");
        scanf("%d", &quantite[contlivre]);
        contlivre++;
    } else {
        printf("Le stock est plein.\n");
    }
}


void Afficherlivre() {
    for (int i = 0; i < contlivre; i++) {
        printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantite: %d\n",
               titres[i], auteurs[i], prix[i], quantite[i]);
    }
}

int Trouverlivre(char titre[100]) {
    for (int i = 0; i < contlivre; i++) {
        if (strcmp(titres[i], titre) == 0) {
            return i;
        }
    }
    return -1;
}


void MAJquantite() {
    char titre[100];
    printf("Titre du livre à mettre à jour: ");
    scanf(" %s", titre);
    int indice = Trouverlivre(titre);
    if (indice!= -1) {
        printf("Nouvelle quantite: ");
        scanf("%d", &quantite[indice]);
    } else {
        printf("Livre non trouvé.\n");
    }
}
void Supprlivre() {
    char titre[100];
    printf("Titre du livre à supprimer: ");
    scanf(" %s", titre);
    int indice = Trouverlivre(titre);
    if (indice != -1) {
        for (int i = indice; i < contlivre - 1; i++) {
            strcpy(titres[i], titres[i + 1]);
            strcpy(auteurs[i], auteurs[i + 1]);
            prix[i] = prix[i + 1];
            quantite[i] = quantite[i + 1];
        }
        contlivre--;
    } else {
        printf("Livre non trouve.\n");
    }
}

void Totallivres() {
    int total = 0;
    for (int i = 0; i < contlivre; i++) {
        total += quantite[i];
    }
    printf("Nombre total de livres en stock: %d\n", total);
}

int main() {
    int choix;
    do {
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre a jour la quantite\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: Ajouterlivre(); break;
            case 2: Afficherlivre(); break;
            case 3: MAJquantite(); break;
            case 4: Supprlivre(); break;
            case 5: Totallivres(); break;
            case 0: ;break;
            default: printf("Option invalide.\n");
        }
    } while (choix != 0);
    return 0;
}
