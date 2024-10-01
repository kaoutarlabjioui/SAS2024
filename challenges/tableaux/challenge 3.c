#include<stdio.h>


int main(){

int Taille;
 int Somme=0;
printf("entrer la taille du tableau :");
scanf("%d",&Taille);

int Tab[Taille];

for(int i=0;i<Taille;i++){

    printf("entrer les elements du tableau :");
    scanf("%d",&Tab[i]);


    Somme+=Tab[i];



}

printf("la somme est %d",Somme);




















return 0;

}
