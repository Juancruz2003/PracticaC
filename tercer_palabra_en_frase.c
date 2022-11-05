#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char C, frase[1000], tercera[1000];
    int i=0, j=0, k=0, CONTPAL=0, BANDERA=1, L;
    printf("ingrese la frase\n");
    while((C=getchar())!='\n')
    {
        frase[i]=C;
        i++;
    }
    frase[i]='\0';
    L=strlen(frase);
    for(i=0;i<L;i++)
    {   if(i==0)
            CONTPAL++;
        else
            if(frase[i]==' '&&frase[i-1]!=' ')
                CONTPAL++;
        if(CONTPAL==3&&frase[i]!=' ')
            {tercera[j]=frase[i];
            j++;}
    }
    tercera[j]='\0';
    for(k=0;k<strlen(tercera)/2;k++)
    {
        if(tercera[k]!=tercera[j-1-k])
            {BANDERA=0;
            break;}
    }
    printf("la tercer palabra es %s\n",tercera);
    if(BANDERA==1)
        printf("y es palindromo\n");
    else
        printf("y no es palindromo\n");

    return 0;
}
