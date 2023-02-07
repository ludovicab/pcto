#include <stdio.h>

int main()
{
    int a;
    int b;
    printf ("inserisci due numeri:\n");
    scanf ("%d %d" ,&a,&b);
    printf ("a: %d\n, b: %d\n", a , b); 
    int divisione = a/b;
    int divisioneresto = a%b;
    printf("a/b: %d\n",divisione);
    printf(" a%%b:%d\n",divisioneresto);
}