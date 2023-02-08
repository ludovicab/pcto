#include <stdio.h>

int main()
{
    int x;
    int y = x-1;
    printf ("inserisci un numero");
    scanf("%d",&x);
    while(x % y != 0 && y>1)
    {
        y = y-1;

    }
    if (y == 1)
    {
        printf ("il numero e primo\n");
    }
    else 
    {
        printf ("il numero non e primo\n");
    }
    }