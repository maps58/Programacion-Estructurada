/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

void modify(int *ptr);

void modify(int *ptr)
{
    // incrementando el valor de x con la ayuda de un apuntador
    (*ptr)++;
}

int main()
{
    int x = 5;

    printf("x = %d\n", x);

    /* The reference (address) of the x is sent to the modify function */
    modify(&x);

    printf("x = %d\n", x);

    return 0;
}
