#include<stdio.h>

int main(){

float MoyennePonderee,PremierNombre,DeuxiemeNombre,TroisiemeNombre,Somme;
 printf("entrer trois nombres :");

 scanf("%f%f%f",&PremierNombre,&DeuxiemeNombre,&TroisiemeNombre);

 Somme=PremierNombre*2+DeuxiemeNombre*3+TroisiemeNombre*5;

 MoyennePonderee=Somme/10;

 printf("la moyenne ponderee est:%.2f",MoyennePonderee);














}
