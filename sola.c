#include <stdio.h>

//creare un array ,riempirlo di numeri e invertirlo

int main()
{
    int i=0; //scorre l'array un elemento alla volta
    int array[5];
    //riempio l'array di numeri
    while (i<=4)
    {
        scanf("%d",&array[i]);
        i=i+1;
    }
    //resetto la i
    i=0;
    //stampare lárray 
    while (i<=4)
    {
        printf("%d\n",array[i]);
        i=i+1;
    }
    i=0;
    //variabile temporanea per scambiare gli elementia due a dues
    int temp;

    while(i<2)
    {
        temp=array[i];
        array[i]=array [4-i];
        array[4-i]=temp;
        i=i+1;
    }
    i=0;
    while(i<=4)
    {
        printf("%d\n",array[i]);
        i=i+1;
    }
}