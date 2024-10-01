#include<stdio.h>
#include<math.h>


int main(){

double Distance,x1,x2,y1,y2,z1,z2,Pow1,Pow2,Pow3;
 printf("entrer x1 :");
 scanf("%lf",&x1);
 printf("entrer x2 :");
 scanf("%lf",&x2);
 printf("entrer y1:");
 scanf("%lf",&y1);
 printf("entrer y2:");
 scanf("%lf",&y2);
 printf("entrer z1:");
 scanf("%lf",&z1);
 printf("entrer z2 :");
 scanf("%lf",&z2);

Pow1=pow((x2-x1),2);
Pow2=pow((y2-y1),2);
Pow3=pow((z2-z1),2);

Distance=sqrt (Pow1+Pow2+Pow3);



printf ("la distance entre deux points dans un espace 3D est :%lf",Distance);

return 0;

}
