#include<stdio.h>
#include<math.h>


int main(){

float VolumeSphere,r;

printf("entrer le rayon de la sphere :");

scanf("%f",&r);

VolumeSphere = 3.14 * pow(r,3) * 4/3;

printf("le volume de la sphere du rayon %.1f est:%.2f",r,VolumeSphere);





return 0 ;





}
