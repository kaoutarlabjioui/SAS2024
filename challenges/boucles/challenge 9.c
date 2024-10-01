#include<stdio.h>


int main (){


int Nombre, i;

printf("entrer un nombre :");
scanf("%d",&Nombre);

if(Nombre==0){

    printf("le nombre de chiffre = 1");

}
else{
    for( i=0;Nombre!=0;i++){


      Nombre/=10;


    }

    printf("le nombre des chiffres est = %d",i);






}












return 0 ;



}
