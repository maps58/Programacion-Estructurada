/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include<stdio.h>

int main(){
	int numero;
          
		  while(1){ 
	printf("ingresar el numero:    ");
	scanf("%i",&numero);
	
		if (numero==0) 		printf ("negro\n");
	else if (numero==1) 	printf ("marron\n");	
	else if (numero==2) 	printf ("rojo\n");
	else if (numero==3) 	printf ("naranja\n");
	else if (numero==4) 	printf ("amarillo\n");
	else if (numero==5) 	printf ("verde\n");
	else if (numero==6) 	printf ("azul\n");
	else if (numero==7) 	printf ("violeta\n");		
	else if (numero==8) 	printf ("gris\n");
	else if (numero==9) 	printf("blanco\n");
	else
	 printf ("\\t\t\tIngresar unn numero del 0 al 9\n\n");
    }	
	return 0; }


