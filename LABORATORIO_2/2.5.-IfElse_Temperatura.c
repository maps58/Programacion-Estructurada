

#include <stdio.h>
int main(){
	int temp_sensor;	
	printf ("ingresa la temperatura del sensor1:\n >>");
	scanf("%i",&temp_sensor);
	
	if(temp_sensor>=25){
	printf ("el sistema esta sobrecalentado: TEMPERATURA = %i grados\a", temp_sensor);
	}
	else{
	printf ("Operacion normal");
		}
		return 0;  }

