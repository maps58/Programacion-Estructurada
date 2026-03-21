/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

#include <stdio.h>
int main() {
	int i, suma = 0;
	int n;
	
	printf ("ingresar el numero tope de la sumatoria: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	suma +=i;
	printf("La suma es %d",suma);

	return 0;
}

