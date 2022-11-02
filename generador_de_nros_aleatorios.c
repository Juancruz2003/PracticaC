#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define piso 0
#define techo 10
#define cantidad 10

int main()
{
    int nro, i=0;
    srand(time(NULL));
    printf("%d numero/s entre %d y %d\n", cantidad, piso, techo);
    for(i=0; i<cantidad; i++){
        nro=rand()%(techo - piso);
        printf("%d\n",nro);
    }
    return 0;
}
