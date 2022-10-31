#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A, B, C;
    float DIS, RA, RB;
    printf("ingrese el termino cuadratico\n");
    scanf("%d",&A);
    printf("ingrese el termino lineal\n");
    scanf("%d",&B);
    printf("ingrese el termino independiente\n");
    scanf("%d",&C);
    DIS=B*B-4*A*C;
    if(DIS<0)
        printf("las raíces son imaginarias");
        else
           {
            RA=((-1)*B+sqrt(DIS))/(2*A);
            RB=((-1)*B-sqrt(DIS))/(2*A);
            if(RA==RB)
                printf("las raíces son iguales y su valor es de %f\n",RA);
            else
                printf("las raíces son %f y %f\n",RA,RB);
           }
    return 0;
}
