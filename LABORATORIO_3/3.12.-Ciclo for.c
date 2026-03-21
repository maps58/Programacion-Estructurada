/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería eléctrica y Electronica*/


#include <stdio.h>
main()  {
int cont,x,y,res; 
char sel='S';
while ( sel == 'S') {
res=1;
        printf("\tAplicacion para elevar un numero a una potencia <x^y>\n");
        printf("\t************************************************\n\n");
		printf("Ingresar el numero X (base): ");
		scanf("%d",&x);
		printf("Ingresar la potencia (exponente) Y: ");
		scanf("%d",&y);
	for (cont=1; cont<=y; cont=cont+1)
	res=res * x;
	printf("La potencia es: %d\n", res);
	printf("Realizar otra potenciacion? S/N:\n");
	scanf("%s",&sel);
}
}




