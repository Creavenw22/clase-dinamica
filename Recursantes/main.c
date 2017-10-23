#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char nombre[256];
    int nota;

}eRecursante;

eRecursante* constructorNP();
eRecursante* constructorP(int,char[],int);

int main()
{
    eRecursante* list[3];
    char auxName[256];
    int auxNote;

    for(int i=0;i<3;i++)
    {

        printf("Ingrese nombre del recursante: ");
        gets(auxName);
        printf("Ingrese nota del recursante: ");
        scanf("%d",&auxNote);

        list[i]=constructorP(i+1,auxName,auxNote);

    }




    return 0;
}

eRecursante* constructorNP()
{
    return malloc(sizeof(eRecursante));
}

eRecursante* constructorP(int legajo, char nombre[], int nota)
{
    eRecursante* punteroStruct;
    punteroStruct = constructorNP();

    if(punteroStruct!=NULL)
    {
        punteroStruct.legajo=legajo;
        strcpy(punteroStruct.nombre,nombre);
        punteroStruct.nota=nota;
    }
    return punteroStruct;
}

