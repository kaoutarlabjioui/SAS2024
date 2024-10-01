#include<stdio.h>
#include<math.h>


 main(){

float a,b,c,Solution1,Solution2,Solution0 ,Delta;
printf("entrer les valeurs de a , b et c:\n");
scanf("%f%f%f",&a,&b,&c);

Delta=pow(b,2)-4*a*c;

if (Delta<0)
    printf("pas de solution dans IR");

else
if( Delta==0 ){

        Solution0=-b/(2*a);

    printf("solution est %f ",Solution0);
}
    else{

       Solution1=(-b-sqrt(Delta))/( 2*a ) ;

       Solution2=(-b+sqrt(Delta))/( 2*a ) ;
        printf("les deux solutions sont: %f\t%f ",Solution1,Solution2);
}







return 0;



}
