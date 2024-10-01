
#include<stdio.h>
#include<math.h>
 int main(){
   float   MoyenneGeometrique,a,b,c,Value;

     printf("entrer trois nombres :");

     scanf("%f%f%f",&a,&b,&c);

     Value=a*b*c;

     MoyenneGeometrique=pow(Value,1.0/3.0);

     printf("la moyenne geometrique de %f %f et %f est:%f ",a,b,c,MoyenneGeometrique);






 return 0;

 }
