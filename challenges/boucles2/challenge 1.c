#include<stdio.h>

int main(){

int Nombre,i;

printf("entrer un nombre:");
scanf("%d",&Nombre);

printf("tableau de multiplication de %d:\n",Nombre);

for(int i=10;i >=0;i--){


printf("%d * %d = %d\n ",Nombre,i,Nombre*i);




}



return 0 ;
}
