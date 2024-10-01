#include<stdio.h>

int main(){

int Nombre,i,j;

printf("entrer un nombre:");
scanf("%d",&Nombre);

printf("tableau de multiplication de %d:\n",Nombre);

for(int i=1;i <= 10 ;i++){


    printf("%d * %d = %d\n ",Nombre,i,Nombre*i);




}



return 0 ;
}






