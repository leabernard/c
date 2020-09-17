#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
   int somme;
   int  i;


     somme =0;
     for  (i=0;i<30;i++)
     {

        printf("saisir une note\n");
        scanf("%d",& note);
        somme=somme + note ;

    }
    somme/=i;
    printf("%d","somme");

    return 0;
}
