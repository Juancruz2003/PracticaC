#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("Prueba.txt", "w");

    if(archivo != NULL){
        printf("El archivo se creo exitosamente\n");
        for(int i=65; i<91; i++){
            fputc(i, archivo);
        }
        if (!fclose (archivo))
            printf ("El archivo ha sido cerrado .\n");
        else
            printf ("Error al cerrar el archivo .\n");
    } else {
        printf("Error al crear el archivo\n");
    }

    archivo = fopen("Prueba.txt", "r");
    if(archivo==NULL){
        printf("No se pudo abrir\n");
        getchar();
    }
    while(1){
        int c = fgetc(archivo);
        if(c==-1){
            break;
        }
        printf("%c ", c);
    }
    fclose(archivo);
    return 0;
}
