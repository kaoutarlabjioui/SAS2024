#include<stdio.h>


int main(){

int Taille,Elemcher,i;

printf("donner la taille du tableau : ");
scanf("%d",&Taille);
int Tab[Taille];
for(i=0;i<Taille;i++){
    printf("donner les elements du tableau : ");
    scanf("%d",&Tab[i]);
}
printf("la recherche d'element dans le tableau.\n");

printf("entrer l'element que vous souhaiter trouver : ");
scanf("%d",&Elemcher);

for(i=0;i<Taille;i++){

    if(Elemcher==Tab[i])
          break;



}

printf("l'element chercher est %d se trouve dans T[%d] ",Elemcher,i);




printf("\n la suppression d'un element du tableau .\n");

int position;

printf("donner position d'element que vous souhaiter suprimer : ");
scanf("%d",&position);

 if ( position>= Taille+1)
      printf("Suppression impossible.\n");
   else
   {
      for (i = position ; i < Taille - 1; i++)
         Tab[i] = Tab[i+1];

      printf(" Apres la suppression, le tableau = ");

      for (i = 0; i < Taille - 1; i++)
         printf("%d ", Tab[i]);
   }

















return 0;
}
