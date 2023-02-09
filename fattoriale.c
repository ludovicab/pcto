#include <stdio.h>

int main()
{
    int x;
    printf ("scrivi un numero\n");
    scanf ("%d",&x);
    int y=1;
    while (x>0)
    {
        y=x*y;
        x=x-1;
    }
    printf ("%d\n",y);
}