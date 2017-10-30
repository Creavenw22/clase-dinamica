#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{
    if(this==NULL)
    {
        printf("Employee does not exist");
    }

    else
    {
    printf("ID: %d ----- Nombre: %s ----- Apellido: %s ------ B: %d",this->id,this->name,this->lastName,this->isEmpty);
    }
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    returnAux=(Employee*)malloc(sizeof(Employee));


    return returnAux;

}

void employee_delete(Employee* this)
{
    free(this);
}

int employee_setId(Employee* this, int id)
{
    if(id<1)
    {
        return 0;
    }

    this->id = id;
    return 1;
}

int employee_getId(Employee* this)
{
    return this->id;
}



