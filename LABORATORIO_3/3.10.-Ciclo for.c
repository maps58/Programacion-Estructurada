/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/


#include <stdio.h>
#include <locale.h> //para imprimir con acentos
int main()
{
	setlocale(LC_ALL,""); 
	int c;
		for(c = 0; c<= 127; c++){
	printf("El valor: %i en base 10, se corresponde con el carácter %c\n",c,(char)c);	
}	
return 0;
}

	
