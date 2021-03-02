#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc , char** argv )
{
    int nombreMystere = 0, nombreEntre = 0;
    const int Max = 100, Min = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (Max - Min + 1)) + Min;
    do
    {
        printf("Quel est le nombre :");
        scanf("%d\n", &nombreEntre);

        if (nombreMystere > nombreEntre)
        {
            printf("C'est plus ! \n\n");
        }
        else if (nombreMystere < nombreEntre)
        {
            printf("C'est mois !\n\n");
        }
        else
        {
            printf("Tres bien c'est le nombre ! \n\n");
        }
    } while (nombreEntre != nombreMystere);
    return 0;
}
