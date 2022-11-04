#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_nros, nros_perfectos[100], contador=0,i=0, divisor, nro, cantidad_perfectos=0, suma_divisores=0;
    printf("ingrese la cant. de nros: \n");
    scanf("%d",&cantidad_nros);
    while(contador<cantidad_nros)
    {
        printf("ingresar un nro: \n");
        scanf("%d",&nro);
        for(divisor=1;divisor<nro;divisor++)
        {
            if(nro%divisor==0)
                suma_divisores = suma_divisores + divisor;
        }
        if(suma_divisores == nro){
            nros_perfectos[i] = nro;
            cantidad_perfectos++;
        }
        suma_divisores=0;
     contador++;
    }
    for(i=0;i<cantidad_perfectos;i++)
        {printf("la matriz es: %d \n",nros_perfectos[i]);
            }
    return 0;
}
