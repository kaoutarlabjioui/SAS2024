#include<stdio.h>

int main(){

int taille,i,min;
printf("donner la taille du tableau : ");
scanf("%d",&taille);

int tab[taille];
for(i=0;i<taille;i++){
    printf("entrer les elements du tableau : ");
    scanf("%d",&tab[i]);
}

min=tab[0];

for(i=1;i<taille;i++){

    if(tab[i]<min){
        min=tab[i];
    }

}
printf("le plus petit elements du tableau est %d ",min);














return 0;
}
