#include <stdio.h>



 int main(){
     int taille,i;

     printf("entre la taille du tableau: ");
     scanf("%d",&taille);

     int tab[taille],max;

     for(i=0;i<taille;i++){

        printf("entrer les elements du tableau : ");
        scanf("%d",&tab[i]);
     }

       max=tab[0];
for(i=1;i<taille;i++){

    if(tab[i]>max){

        max=tab[i];
}}

printf("l'element maximale est %d .",max);














    return 0;
}

