#include <stdio.h>
int main(){

float TemperatureCelsius,TemperatureKelvin;
const float c=273.15;
printf("entrer une temperature en celisius:");
scanf("%f",&TemperatureCelsius);
TemperatureKelvin=TemperatureCelsius+c;
printf("la temperature en kelvin est:%.2f",TemperatureKelvin);



return 0;




}
