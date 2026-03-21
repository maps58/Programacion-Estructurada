/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

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


