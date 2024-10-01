#include<stdio.h>



int main(){

float a,b,Somme,Soustraction,Devision,Multiplication ;

printf("entrer deux nombres :");
scanf("%f%f",&a,&b);
Somme=a+b;
printf("la somme  est %.2f",Somme);

Soustraction=a-b;
printf("\nla soustraction est :%.2f",Soustraction);
Devision=a/b;
printf("\nla devision est:%.2f",Devision);
Multiplication=a*b;
printf("\nla Multiplication est :%.2f",Multiplication);



 return 0;


}
