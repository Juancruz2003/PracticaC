#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Hacer un programa que me permita ingresar una lista de apellidos, ciudad de residencia y edad
que serán almacenados en una tabla tipo estructura. Luego clasificar a los mismos en infantiles, activos o jubilados.
Mostrar la tabla ordenada alfabéticamente por apellido.*/
struct persona
    {
    char nom[15];
    char ciu[15];
    int edad;
    char tipo[15];
    };
    struct persona listado[20];
int main()
{
    int N, i, h, j, k, l;
    struct persona aux;
    printf("ingrese la cant. de personas\n");/*Se ingresa lac-ant. de personas*/
    scanf("%d",&N);
    for(i=0;i<N;i++)/*Se realiza un bucle para ingresar los datos en los campos de la variable listado*/
    {
        printf("Apellido %d\n",(i+1));
        scanf("%s",&listado[i].nom);
        printf("Ciudad de Residencia %d\n",(i+1));
        scanf("%s",&listado[i].ciu);
        printf("Edad %d\n",(i+1));
        scanf("%d",&listado[i].edad);
    }
    for(h=0;h<N;h++)/*Se realiza la designación del tipo de persona en base a su edad*/
    {
        if(listado[h].edad<16)
            strcpy(listado[h].tipo,"Infantil");
        else
            if(listado[h].edad<60)
            strcpy(listado[h].tipo,"Activo");
            else
                strcpy(listado[h].tipo,"Jubilado");
    }
    for(j=0; j<N; j++)
    {
        for(k=(j+1);k<N;k++)
        {
            if(strcmp(listado[j].nom,listado[k].nom)>0)/*Si el primero es mayor*/
                {aux=listado[j];/*Se realiza el intercambio con la ayuda de una variable auxiliar*/
                listado[j]=listado[k];
                listado[k]=aux;}
        }
    }
    for(l=0; l<N; l++)
    {
        printf("%s vive en %s tiene %d es %s\n",listado[l].nom, listado[l].ciu, listado[l].edad, listado[l].tipo);/*Se muestran los datos almacenados en listado*/
    }
    return 0;
}
