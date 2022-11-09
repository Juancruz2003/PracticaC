#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int long_palabras[1000], i=0, j=0, long_palabra=0, long_frase;
    char frase[1000], C;
    printf("Ingrese la frase: \n");
    while((C=getchar())!='\n')
    {
        frase[i]=C;
        i++;
    }
    frase[i]='\0';
    printf("La frase es: %s\n", frase);
    for(i=0;i<=strlen(frase);i++)
    {
        if(frase[i]!=' '&&frase[i]!='\0')
            long_palabra++;
        else
            {long_palabras[j]=long_palabra;
            j++;
            long_palabra=0;}
    }
    long_frase=strlen(frase);
    for(i=0;i<j;i++)
        printf("La longitud de la palabra %d es: %d\n", i+1, long_palabras[i]);
    printf("La longitud de la frase es %d\n", long_frase);

    return 0;
}
