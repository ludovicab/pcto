#include <stdio.h>

int main()
{
    int x = 100;
    int somma;
    int y;
    int divisione;
    while (x>=0)
    {
        printf (" inserisci un numero\n");
        scanf ("%d",&x);
        somma=somma+x;
        y=x+1;
        divisione = somma/y;
        printf ("%d",&divisione);
    }
}