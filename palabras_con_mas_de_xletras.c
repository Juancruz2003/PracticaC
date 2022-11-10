#include <stdio.h>
#include <stdlib.h>

int main()
{
   char frase[1000];
    int cant_letras, cont=0, cont_palabras=0, i;

    printf("Ingrese una frase: ");
    scanf("%[^\n]",frase);
    getchar();

    printf("Ingrese una cant de letras: ");
    scanf("%i",&cant_letras);


    for(i=0; frase[i]; i++){
        if(frase[i]!=' '){
            cont++;}
        else{
            if(cont>cant_letras)
                cont_palabras++;
            cont=0;
        }
    }
    if(cont>cant_letras)
        cont_palabras++;

    printf("La cantidad de palabras que tienen mas de %d letras es %i", cant_letras, cont_palabras);
    return 0;
}
