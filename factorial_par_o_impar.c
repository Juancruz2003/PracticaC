#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,F=1,D=1;
    printf("ingrese un nro:\n");
    scanf("%d",&nro);
    while(D<=nro)
    {
        F=F*D;
        D++;
    }
    printf("el factorial es %d\n",F);
    if(F%2==0)
        printf("el factorial es par\n");
    else
        printf("el factorial es impar\n");
    return 0;
}
