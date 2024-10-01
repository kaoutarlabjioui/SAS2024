#include <stdio.h>

int main() {
    int Nombre, i;
    int somme = 0;

    printf("Entrez un nombre entier  : ");
    scanf("%d", &Nombre);

    for (i = 1; i <= Nombre; i++) {
        somme += i;
        printf("%d", i);
        if (i < Nombre) {
            printf(" + ");
        }
    }
    printf(" = %d\n", somme);
    return 0;
}

