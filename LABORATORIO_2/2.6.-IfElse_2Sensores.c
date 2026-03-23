
#include <stdio.h>
int main(){
	
	int TS_1;
	int TS_2;
	
	printf ("ingresa la temperatura del sensor1\n");
	scanf("%i",&TS_1);
	printf ("ingresa la temperatura del sensor2\n");
	scanf("%i",&TS_2);
	if((TS_1 >=25) && (TS_2 >=25))
              {
	printf ("el sistema se está sobrecalentado");
	}
	else{
	printf ("operacion normal");
			}
		return 0; }

