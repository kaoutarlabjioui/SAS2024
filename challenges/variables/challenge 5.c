#include<stdio.h>



int main(){

float TemperatureCelisius;
printf("entrer la temperature de l'eau en celisius :");
scanf("%f",&TemperatureCelisius);

    if ((TemperatureCelisius >= 0)&&(TemperatureCelisius < 100))
    printf("l'etat de l'eau est liquide");
else

if(TemperatureCelisius < 0)
printf("l'etat de l'eau est solide");

 else

    printf("l'etat de l'eau est gazeuse");


    return 0;







}
