#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro, factorial=1, contador=1;
    printf("ingrese el numero:\n");
    scanf("%d",&nro);
    while(contador<=nro)
    {
        factorial = factorial * contador;
        contador++;
    }
    printf("el factorial es %d", factorial);
    return 0;
}

