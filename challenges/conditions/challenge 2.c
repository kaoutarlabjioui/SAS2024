#include<stdio.h>

int main(){

char Voyelle;
printf("entrer un caractere :");
scanf("%c",&Voyelle);
switch (Voyelle){
 case 'a' : printf("a est voyelle");
 break ;
 case 'e' : printf("e est voyelle");
 break;
 case 'i' : printf("i est voyelle");
 break;
 case 'u' : printf("u est voyelle");
 break;
 case 'o' : printf("o est voyelle");
 break;
 case 'y' : printf("y est voyelle");
 break;
default : printf("n'est pas voyelle");
break;
}
return 0;

}
