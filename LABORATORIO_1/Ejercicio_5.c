/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

 int main () {

 float val1= 1.2389, val2 = 5.4321 , sumafloat;
 int op1 = 5, op2 = 7, sumaint;

 sumaint = op1 + op2 ;
 sumafloat = val1 + val2 ;

 printf (" %d + %d = %d \n", op1 , op2 , sumaint );
 printf (" %2.4f + %2.4f = %10.2f \n", val1 , val2 , sumafloat );

return 0;
}

