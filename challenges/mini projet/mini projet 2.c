#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 #define Maxcontact 200


typedef struct{

char nom[Maxcontact];
char email[Maxcontact];
char numtel[Maxcontact];
}contact;


contact listecontact[Maxcontact];
int cont=0;
void Ajoutercontact(){

 if (cont < Maxcontact) {
        printf("Nom: ");
        scanf(" %s", listecontact[cont].nom);
        printf("Email: ");
        scanf(" %s", listecontact[cont].email);
        printf("Numtel: ");
        scanf("%s", listecontact[cont].numtel);
        cont++;
    } else {
        printf("memoire  pleine .\n");
    }


}
void Afficherlescontacts() {
    for (int i = 0; i < cont; i++) {
        printf("Nom: %s, Email: %s, Numtel: %s, \n",
               listecontact[i].nom, listecontact[i].email, listecontact[i].numtel);
    }
}

void Cherchercontact() {

    int i;
    char nom[100];
    printf("entrer le nom du que vous voulez chercher :");
    scanf("%s",&nom);

    for ( i = 0; i < cont; i++) {
if (strcmp(listecontact[i].nom, nom) == 0) {
                printf(" voila son munero : %s\n ",listecontact[i].numtel);

                printf("voila son email : %s \n ",listecontact[i].email);

        }
    }
printf("contact non valide\n");

}


void  MAJcontact(){

int i;
char nom[100];

 printf("entrer le nom du que vous voulez modifier:");
    scanf("%s",&nom);


    for ( i = 0; i < cont; i++) {
if (strcmp(listecontact[i].nom, nom) == 0) {
        printf("entrer nouveau number : ");
        scanf("%s",listecontact[i].numtel);
        printf("entrer nouveau email : ");
        scanf("%s",listecontact[i].email);


        }
    }
printf("contact non valide\n");


}
void Supprcontact(){
int i,j;
char nom[100];

printf("entrer le nom du contact que vous voulez supprime : ");
scanf("%s",nom);

    for ( i = 0; i < cont; i++) {
if (strcmp(listecontact[i].nom, nom) == 0) {
     for(j=i;j<cont;j++){
        listecontact[j]=listecontact[j+1];
     }
cont--;

printf("contact supp avec succee\n.");
break;


}
printf("contact non valide\n");

}
}
void main(){
 int choix;
    do {
        printf("1. Ajouter un contact\n");
        printf("2. recherche contact \n");
        printf("3. Mettre a jour contact\n");
        printf("4. Supprimer un contact\n");
        printf("5. Afficher tous les contact\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: Ajoutercontact(); break;
            case 2: Cherchercontact(); break;
            case 3: MAJcontact(); break;
            case 4: Supprcontact(); break;
            case 5: Afficherlescontacts(); break;
            case 0: ;break;
            default: printf("Option invalide.\n");
        }
    } while (choix != 0);












}
