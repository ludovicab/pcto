#include <stdio.h>

int main()
{
    int x;
    int y;
    printf ("inserisci la base e l'esponente\n");
    scanf ("%d %d" , &x,&y);
    int z=1;
    while (y !=0)
    {
     z=z*x;
     y=y-1;
    }
    printf ("%d\n",z);
}