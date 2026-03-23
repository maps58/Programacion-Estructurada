/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()	{
	char color [12];
	int n=1;	
	
	    while(n){	       
	printf("ingresar el color (Mayusculas o Minusculas): ");
	
	scanf("%12s",&color);
    
	    if (strcasecmp(color,"negro")==0)  printf ("0\n");	    
	        else if (strcasecmp(color,"marron")==0 || strcasecmp(color,"cafe")==0) 
				printf ("1\n");
			else if  (strcasecmp(color,"rojo")==0)  	printf ("2\n");
			else if  (strcasecmp(color,"naranja")==0) 	printf ("3\n");
			else if  (strcasecmp(color,"amarillo")==0) 	printf ("4\n");
			else if  (strcasecmp(color,"verde")==0)		printf ("5\n");
			else if  (strcasecmp(color,"azul")==0)		printf ("6\n");		
			else if  (strcasecmp(color, "violeta")==0)	printf ("7\n");
            else if  (strcasecmp(color, "gris")==0)		printf ("8\n");
			else if  (strcasecmp(color, "blanco")==0)	printf ("9\n");	
			else
		 		printf("Ingrese el color correcto:");		 	
		 	}		 	
		     return 0;	
}



