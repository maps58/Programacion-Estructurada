/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/


#include <stdio.h>

short int SM_1, SM_2;

	int main(){
		printf ("ingresar TEMPERATURAS del SM_1 , SM_2 \n:  ");
		scanf ("%hd,%hd",&SM_1,&SM_2);
	
		if (SM_1 >= 25 || SM_2 >=25)
	    	printf("\nENCENDER ALARMA");
	    else
	    	printf("\nTEMPERATURA NORMAL");
    return 0;
} 

