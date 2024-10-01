#include<stdio.h>

int main(){

int Nombre1,Nombre2,Somme;

printf("entrer deux nombres :");
scanf("%d%d",&Nombre1,&Nombre2);
if(Nombre1!= Nombre2){
        Somme=Nombre1+Nombre2;
printf("la somme est %d",Somme);
}
else {
 Somme = ( Nombre1+Nombre2 )*3;
printf("le triple de leur somme est:%d",Somme);
}



}
