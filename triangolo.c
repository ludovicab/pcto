#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf (" inserisci tre numeri:\n");
    scanf(" %d %d %d",&a,&b,&c);
    if( (a+b>c) & (a+c>b)& (b+c>a))
   {
     printf ("e un triangolo\n");
     if (a != b && a!=c && b!=c)
     {
     printf ("e un triangolo scaleno");}
     else if (a==b && a==c && b==c)
     {printf ("e un triangolo equilatero");}
     else if(a==b && a!=c && b!=c)
     {printf ("e un triangolo isoscele");}
   }

   else 
   {
    printf ("non e un triangolo\n");

   }



}