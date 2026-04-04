/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#define PI 3.1416

float areaEsfera(float radio);  //prototipo de la funcion

int main(void)
{
    float r, area;
    printf("Ingresa el valor del radio de la esfera (cms.):\n");
    scanf("%f", &r);

    /* Llamada a la función areaEsfera */
    area = areaEsfera(r);
    
    if (area < 100){
    	printf("El area de la esfera es: %.2f cms.\n", area);
   }
			
	else {
	
		printf("El area de la esfera es: %.2f m\xFD\n", area/1000);
}
    return 0;
}

/* Definición de la función areaEsfera */
float areaEsfera(float radio)
{
    float resultado;
    resultado = 4.0f * PI * radio * radio;
    return resultado;
}


