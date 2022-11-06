#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C, frase[1000], tercera[1000];
    int i=0, j=0, k=0, CONTPAL=0, BANDERA=1, L;
    printf("Ingrese una frase\n");
    while((C=getchar())!='\n')
    {
        frase[i]=C;
        i++;
    }
    frase[i]='\0';
    printf("La frase es: \n%s\n", frase);

    return 0;
}
