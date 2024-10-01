#include<stdio.h>


int main() {

 int Nombre,NombreInverse;
 NombreInverse=0;

 printf("entrer un nombre de 4 chiffres:");

 scanf("%d",&Nombre);

if (Nombre <1000 || Nombre >9999){

printf("saisir un autre nombre");
}

else{

 NombreInverse= (NombreInverse*10)+( Nombre%10 );
 Nombre=Nombre/10;
 NombreInverse= (NombreInverse*10)+( Nombre%10 );
 Nombre=Nombre/10;
 NombreInverse= (NombreInverse*10)+( Nombre%10 );
 Nombre=Nombre/10;
 NombreInverse= (NombreInverse*10)+( Nombre%10 );

 printf("le nombre inverse est : %d",NombreInverse);

}
 return 0 ;










}
