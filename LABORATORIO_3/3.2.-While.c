/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(){
	int n,i;
	printf ("\t\t\tEste programa genera una tabla de multiplicar del 0 al 20, del numero que usted ingrese\n\n");
	printf (" Que tabla de multiplicar desea; del =>    ");
	scanf("%d",&n);
	i = 0;
	while (i<=20){
		printf("%d * %d = %d\n", i,n, i*n);
		++i;
	}
return 0;
}
	
