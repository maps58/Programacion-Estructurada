/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

//Funciones que devuelven un valor entero.


#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

	int suma(int n); // Se declara el prototipo de la función antes de main y debe llevar (;)
	
int	main() {
	
	system("COLOR f1");
	int sum,n;
		printf("Ingresar el valor de n: " );
		scanf("%d",&n);
		printf("la suma de los %d primeros numeros enteros es: %d",n,suma(n));
getch();
}

int suma(int n) // definición de la función
{
int i,sum=0;
for(i=1; i<=n; i++)
sum+=i;
return(sum);
}

