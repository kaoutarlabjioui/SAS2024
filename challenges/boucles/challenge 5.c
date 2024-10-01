#include<stdio.h>

int main(){
int Base,Exposant,resultat =1;

printf("entrer une base :");
scanf("%d",&Base);
printf("entrer un exposant :");
scanf("%d",&Exposant);

if(Exposant==0){
   printf("%d^%d = 1",Base,Exposant);
}
else{
for(int i=0;i< Exposant;i++){

    resultat *= Base;

}
printf("%d ^%d = %d ",Base,Exposant,resultat);

}


return 0 ;










}
