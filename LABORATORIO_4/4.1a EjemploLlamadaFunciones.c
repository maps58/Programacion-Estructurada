/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


//4.1a: llamada de funcion; no envia argumentos ni retorna valores

#include <stdio.h>
void suma (){	
int a,b;

printf("Ingresar los 2 operandos separados por una coma\n");
scanf ("%d,%d",&a,&b);
printf("\nEl resultado de la suma de %d + %d = %d",a,b,a+b);}

int main() {
  suma();   
  return 0;
}








