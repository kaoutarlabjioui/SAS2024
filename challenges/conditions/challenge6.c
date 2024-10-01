#include<stdio.h>


int main(){
float Nombre;

 printf("entrer un nombre :");
 scanf("%f",&Nombre);

 if (Nombre > 0){
    printf("%f est positif",Nombre);
 }
    else
       {

        if ( Nombre < 0 ){
        printf("%f est negatif",Nombre);
        }


     else

 printf("NUL");
       }

return 0 ;

}
