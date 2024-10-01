#include<stdio.h>

int main(){



int n , nbr1 = 0, nbr2 = 1, suivant, i,Sommme=0;

  printf("Entrez le nombre de termes\n");
  scanf("%d", &n);

  printf("Les %d premiers termes de la serie de Fibonacci sont:\n", n);

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      suivant = i;
    else
    {
      suivant = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = suivant;
    }
    printf("F(%d)=%d\n",i, suivant);
    printf("")
  }








return 0 ;

}


