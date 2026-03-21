/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

#include <stdio.h>


 float main() {
 float number, resultado = 0;

  // El cuerpo del loop es ejecutado al menos una vez.
  do {
    printf("Ingrese un a number: ");
    scanf("%f", &number);
    resultado = resultado - number;
  }	
  while(number != 0.0);

  printf("resultado = %f",resultado);
  return 0;
}

