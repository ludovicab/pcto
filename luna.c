#include <stdio.h>

int main()
{
    int anno;
   printf("inserisci un numero:\n");
   scanf("%d", &anno);
   if (anno==1969)
   {
    printf("e nato il 1969\n");
    }
     else if (anno > 1969)
    {
printf ("e nato %d anni dopo il 1969\n", anno -1969);
    
   }
   else 
   {
    printf ("e nato %d prima del 1969\n",anno +1969);
   }
}