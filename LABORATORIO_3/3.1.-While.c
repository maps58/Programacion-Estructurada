/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include <stdio.h>
 int main () {
   /* local variable definition */
   int min = 0;
   int max = 0;

   printf("ingresar el valor maximo y minino separados con guion bajo >>  \n"),
   scanf ("%d_%d", &min,&max);

   /* while loop execution */
   while( min <= max ) {
      printf("value of a: %d\n", min);
      min++;  
   }
   return 0;
}

