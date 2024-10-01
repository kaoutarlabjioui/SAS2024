#include<stdio.h>

int main(){

float Longueur,Largeur,SurfaceRectangle;
 printf("entrer longueur du rectangle:");
 scanf("%f",&Longueur);
 printf("entrer largeur du rectangle:");
 scanf("%f",&Largeur);

SurfaceRectangle=Largeur * Longueur;
printf("la surface du rectangle est %.2f",SurfaceRectangle);

return 0 ;

}
