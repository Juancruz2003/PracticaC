#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, nro, suma_divisores=0;

        printf("Ingresar un nro: \n");
        scanf("%d",&nro);
        for(divisor = 1; divisor<nro; divisor++)
        {
            if(nro%divisor==0){
                suma_divisores = suma_divisores + divisor;
            }
        }
        if(nro == suma_divisores){
            printf("Es perfecto\n");
        } else {
            printf("No es perfecto");
        }

    return 0;
}
