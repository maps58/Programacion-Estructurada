/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(void) {
	float voltaje,corriente,resistencia;
	int	opcion;
 printf("Menu\n"); 
 printf("1. Calcular voltaje\n"); 
 printf("2. Calcular corriente\n");
 printf("3. Calcular resistencia\n"); 
 printf("Elejir una operacion: ");
	scanf("%d",&opcion);
	switch(opcion)	{
		case 1: 		
		printf("Ingresar la corriente [en Amperes] \n: ");
		scanf("%f",&corriente); 
 		printf("Ingresar la resistencia [en Ohms] \n: ");
 		scanf("%f",&resistencia); 	
         	voltaje = corriente * resistencia;
         	printf("%.2f * %.2f = %.2f\n",corriente,resistencia,voltaje);
			break;
		case 2: 	
		printf("Ingresar el voltaje [Volts] \n:");
		scanf("%f",&voltaje); 
 		printf("Ingresar la resistencia [Ohms] \n:");
 		scanf("%f",&resistencia); 		
            corriente=voltaje/resistencia;
			printf("%.2f / %.2f = %.2f\n",voltaje,resistencia,corriente);
			break;
		case 3:
		printf("Ingresar el voltaje [volts] \n: ");
		scanf("%f",&voltaje); 
 		printf("Ingresar la corriente [Amperes] \n: ");
 		scanf("%f",&corriente);
			resistencia=voltaje/corriente;
			printf("%.2f / %.2f = %.2f\n",voltaje,corriente,resistencia);
			break;
			default:
			printf("Seleccionar bien la opcion\n"); 
	}
        }
        
        

