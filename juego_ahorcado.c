#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char P[20], C, L[1], LE[20];
    int A=0, S=1, B=0, I[20], CE=0, E=0, PE=0, CA;
    printf("Jugador 1:\n");
    printf("Ingrese una palabra\n");
    while((C=getchar())!='\n')
    {
        P[A]=C;
        A++;
    }
    P[A]='\0';
    system("cls");
    printf("La Palabra es:\n");
    for(B=0; B<A; B++)
    {printf(" _ ");}
    printf("\n\n");
    printf("Errores: %d (Max: 6)\n",CE);
    printf("Ingrese una letra: \n");
    while((C=getchar())!='\n')
    {L[0]=C;}
    while(S!=0)
    {
        E=0;
        CA=0;
        for(B=0; B<A; B++)
        {   if(P[B]==L[0])
                {I[B]=1;
                E=1;}
            else
                if(I[B]!=1)
                    I[B]=0;
        }
        if(E==0)
            {LE[CE]=L[0];
            CE++;}
        if(CE==6)
            {system("cls");
            printf("Ahorcado!\n");
            printf("La palabra era: ");
            for(B=0; B<A; B++)
            {printf(" %c ",P[B]);}
            printf("\n");
            break;}
        system("cls");
        CA=0;
        printf("La Palabra es:\n");
        for(B=0; B<A; B++)
        {
            if(I[B]==1)
                {printf(" %c ",P[B]);
                CA++;}
            else
                printf(" _ ");
        }
        printf("\n\n");
        if(CA==A)
            {printf("Felicidades, Ganaste!! :)\n");
            break;}
        printf("Errores: %d (Max: 6)\n",CE);
        if(CE!=0)
        {printf("No estan: ");
            for(PE=0;PE<CE;PE++)
            {printf("%c ",LE[PE]);}
            printf("\n");
        }
        printf("Ingrese una letra: \n");
        while((C=getchar())!='\n')
        {L[0]=C;}

    }
    return 0;
}
