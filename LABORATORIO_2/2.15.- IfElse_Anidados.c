/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(void) {
//Se leen 5 numeros para determinar cual es el menor.
int n1, n2, n3, n4, n5, menor;
while(1){

		printf("Ingresar 5 numeros enteros (+ o -)separados por una diagonal\n: ");
		scanf("%d/%d/%d/%d/%d",&n1,&n2,&n3,&n4,&n5);

//Se considera que el menor valor es el almacenado en n1.
    	 menor=n1;
//Si n2 es < que n1 se actualiza menor.
	if (n2<menor)  menor=n2;	
//Si n3 es < que n2 se actualiza menor.
	if (n3<menor)  menor=n3;
//Se procede de forma análoga con n4 y n5
	if (n4<menor)  menor=n4;
    if (n5<menor)   menor=n5;
//Se muestran por pantalla los núm. introducidos y el menor valor
printf("El numero menor de %d, %d, %d, %d y %d es: %d \n",n1,n2,n3,n4,n5,menor);
}
return 0;
}	


	
