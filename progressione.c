#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf (" inserisci tre numeri:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(b-a==c-b)
    {
        printf("e una progressione aritmetica");
    }
    else
    {
        printf (" non e una progressione aritmetica");
    }
}