#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1,lado2,lado3;
    printf("Ingrese un lado del triangulo\n");
    scanf("%d",&lado1);
    printf("Ingrese otro lado\n");
    scanf("%d",&lado2);
    printf("Ingrese otro lado\n");
    scanf("%d",&lado3);
    if(lado1==lado2 && lado2==lado3 && lado3==lado1)
    {printf("el tri�ngulo es equil�tero\n");}
    else
        if(lado1==lado2 || lado2==lado3 || lado3==lado1)
        {printf("es is�sceles\n");}
        else
            printf("es escaleno\n");
    return 0;
}
