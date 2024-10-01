#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Maxlivre 100


typedef struct{

char titre[100];
char auteur[100];
float prix;
int quantite;
}Livre;

Livre listliv[Maxlivre];
int cont=0;
 void Ajouterlivre(){

     if (cont <Maxlivre ){
     printf("entrer le titre du livre : ");
     scanf("%s",listliv[cont].titre);
     printf("entrer l'auteur de livre : ");
     scanf("%s",listliv[cont].auteur);
     printf("entrer le prix :");
     scanf("%f",&listliv[cont].prix);
     printf("entrer la quantite du livre : ");
     scanf("%d",&listliv[cont].quantite);

cont++;}

else {
        printf("Le stock est plein.\n");
 }}
void Afficherlivre(){
for (int i=0;i<cont;i++){


    printf("titre: %s \n auteur:%s\n prix:%.2f\n quantite:%d\n",listliv[i].titre,listliv[i].auteur,listliv[i].prix,listliv[i].quantite);

}
}


int Trouverlivre(char titre[100]) {
    for (int i = 0; i < cont; i++) {
        if (strcmp(titre[i], titre) == 0) {
            return i;
        }
    }
    return -1;
}





void MAJquantite(){
char titre[100];
int quantite;
 printf("Titre du livre à mettre à jour: ");
    scanf(" %s", titre);
 int indice = Trouverlivre(titre);
    if (indice!= -1) {
        printf("Nouvelle quantite: ");
        scanf("%d", &quantite[indice]);
    } else {
        printf("Livre non trouvé.\n");
    }
}

 int main(){

 int choix;

 printf("__________gestion de bibliotheque_________");
 do{
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre a jour la quantite\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: Ajouterlivre(); break;
            case 2: Afficherlivre(); break;
            //case 3: MAJquantite(); break;
           // case 4: Supprlivre(); break;
           //d case 5: Totallivres(); break;
            case 0: break;
            default: printf("Option invalide.\n");
        }
    } while (choix != 0);

 return 0;
 }
