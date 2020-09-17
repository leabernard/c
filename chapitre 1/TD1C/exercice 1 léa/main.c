#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prix;
    int quantiter;
    float total=0;


     printf("entrer le prix \n");
    scanf("%f", &prix);
    printf("entrer la quantiter\n");
    scanf("%d", &   quantiter  );

    total = prix * quantiter;
if( total> 500)
{
  total= total *0.9;

}
 printf("la facutre %f" ,&total);
    return 0;

}



