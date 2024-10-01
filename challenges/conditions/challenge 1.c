#include<stdio.h>


int main(){

int Nombre;
printf("saisir un nombre:");
scanf("%d",&Nombre);
if (Nombre == 0){
    printf("ni pair ni impair");
}
else {
if(Nombre%2==1){

    printf("%d est impair",Nombre);
}

else
    printf("%d est pair",Nombre);

}


return 0 ;



}
