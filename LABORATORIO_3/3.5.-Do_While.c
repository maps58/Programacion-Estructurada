/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

#include <stdio.h>
int main() {
  float number, sum = 0;

  // El cuerpo del loop es ejecutado al menos una vez.
  do {
  	system ("cls");
    printf("Enter a number: ");
    scanf("%f", &number);
    sum += number;
    printf("\nel valor acumulado es %0.2f\n",sum);
    sleep(2);
  }
  while(number != 0.0);
  printf("sum = %0.2f",sum);
  return 0;
}



