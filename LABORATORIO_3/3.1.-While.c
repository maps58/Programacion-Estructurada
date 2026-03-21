/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingniería eléctrica y Electronica*/

#include <stdio.h>
 int main () {
   // Definicion de variables locales
   int min = 0;
   int max = 0;

   printf("ingresar el valor maximo y minino separados con guion bajo >>  \n"),
   scanf ("%d_%d", &min,&max);

   // Ejecución del bucle while
   while( min <= max ) {
      printf("value of a: %d\n", min);
      min++;  
   }
   return 0;
}

