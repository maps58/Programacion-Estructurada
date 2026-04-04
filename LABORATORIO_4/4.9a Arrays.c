/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main()
{
    /* On a 32 bit system size of int would be 4 bytes width */
    int arr1[4] = {10, 20, 30, 40};
    /* On a 32 bit system size of short would be 2 bytes width */
    short arr2[3] = {50, 60, 70};
    /* On a 32 bit system size of char would be 1 bytes width */
    char arr3[4] = {'M', 'A', 'P', 'S'};
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Elemento %d de arr1[%d] esta en la direccion %p", i, i, &arr1[i]);
        printf("  Su contenido es %d\n", arr1[i]);
    }
    //printf("\n");
    for (i = 0; i < 3; i++)          
    {
        printf("Elemento %d de arr2[%d] esta en la direccion %p", i, i, &arr2[i]);
     	printf("  Su contenido es %d\n", arr2[i]);
   }
    for (i = 0; i < 4; i++)
    {
        printf("Elemento %d de arr3[%d] esta en la direccion %p", i, i, &arr3[i]);
        printf("  Su contenido es %c\n", arr3[i]);
    }
    return 0;
}
