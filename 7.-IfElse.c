/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include <stdio.h>

short int Sensor_temperatura;

	int main(){
		printf ("ingresar la TEMPERATURA\n:  ");
		scanf ("%hd",&Sensor_temperatura);
	
		if (Sensor_temperatura > 25)
	    	printf("TEMPERTURA ALTA");
	    else
	    	printf("TEMPERTURA NORMAL");
    return 0;
}

