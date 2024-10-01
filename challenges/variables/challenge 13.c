

#include <stdio.h>

int main() {
    int Nombre;
    printf("Enter un nombre positif: ");
    scanf("%d",&Nombre);

   int binaire[100];
    int i = 0;

    while (Nombre> 0) {
        binaire[i] = Nombre % 2;
        Nombre = Nombre / 2;
        i++;
    }
for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }

int Hexadecimale[100];
int cpt=0, count=0;
    while (Nombre > 0) {

       Hexadecimale[cpt]  = Nombre % 16;

        Nombre = Nombre / 16;
          cpt++;
    }

    for (int count= cpt - 1; count >= 0; count--) {
        switch(Hexadecimale[count]){
            case 10:
              printf("A");
              break;
            case 11:
              printf("B");
            case 12:
              printf("C");
              break;
            case 13:
              printf("D");
            case 14:
              printf("E");
              break;
            case 15:
              printf("F");
            default:
               printf("%d", Hexadecimale[count]);
              }



    }


    return 0;
}














