#include<stdio.h>

int main(){

int Nombre;




printf("entrer un nombre :");

scanf("%d",&Nombre);
 while (Nombre>0){

    int resultat = Nombre%10;

    printf("%d",resultat);



    Nombre/=10;


 }






return 0 ;




}

