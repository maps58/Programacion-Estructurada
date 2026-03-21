/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

#include <stdio.h>
//#include <conio.h>
int main() { 
     int par=0; 
     int impar=0;
    for (int c=1, p=2, i=1; c<=4; c++, p+=2, i+=2)
    {
    par+=p;
   impar+=i;
   }
  printf("%d, %d\n",par,impar);
  //getch();
   return 0;
  }

