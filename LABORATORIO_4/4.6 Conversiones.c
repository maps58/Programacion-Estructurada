/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//declaracion de prototipos
void desplegarMenu(void);
char leerOpcion(void);
void ejecutarOpcion(char );

int main(){    //funcion proncipal
char opcion;
	do{
		
	desplegarMenu();
	opcion=leerOpcion();
	ejecutarOpcion(opcion);
	}while(opcion!='9');
}
void desplegarMenu(){		 
system("cls");    
    system("color 8F");
    printf("\n\n\t\t\tINSTITUTO TECNOLOGICO DE OAXACA\n");
    printf("\t\tDepartamento de Ingenieria Electrica y Electronica\n");
	printf("\n\n\t\tCONVERSION DE VOLTAJES DE UNA ONDA SENOIDAL PURA\n\n");
	printf("\t1. Voltaje pico a Voltaje rms(eficaz)\n");
	printf("\t2. Voltaje rms(eficaz) a Voltaje pico\n");
	printf("\t3. Voltaje pico a Voltaje promedio\n");
	printf("\t4. Voltaje promedio a Voltaje pico\n");
	printf("\t5. Voltaje promedio a voltaje rms(eficaz)\n");
	printf("\t6. Voltaje rms(eficaz) a Voltaje promedio\n");
	printf("\t7. Voltaje pico a Voltaje pico-pico\n");
	printf("\t8. Voltaje pico-pico a voltaje pico\n");
	printf("\t9. Salir\n");
	printf("\n\n\tSeleccione opcion: ");
	}
		
char leerOpcion(){
char c;
	do{
	c = getch();
	if(c>='1'&&c<='9')
	printf("%c",c);
	}
	while(c<'1'||c>'9');
	return c;
	}

void ejecutarOpcion(char opcion){
float Vp, Vrms, Vprom, Vpp;
	switch(opcion){
			case '1':printf("\n\tIngresar Vp:   ");
			scanf(" %f",&Vp);
			printf("\n\tEl Voltaje rms es %.3f Vrms:", Vp*.707);
		break;		
			case '2':printf("\n\tIngresar Vrms:  ");
			scanf("%f",&Vrms);
			printf("\n\tEl Voltaje pico es : %.3f Vp", Vrms*1.414);
		break;	
			case '3':printf("\n\tIngresar Vp:  ");
		    scanf("%f",&Vp); 		    
			printf("\n\tEl Voltaje promedio es : %.3f Vprom", Vp*0.637);
		break;		
			case '4':printf("\n\tIngresar Vprom:  ");
		 scanf("%f",&Vprom); 
			printf("\n\tEl Voltaje pico es : %.3f Vprom", Vprom/0.637);
		break;		
			case '5':printf("\n\tIngresar Vprom:  ");
		 scanf("%f",&Vprom); 
			printf("\n\tEl Voltaje rms es : %.3f Vrms", Vprom*1.11);
		break;		
			case '6':printf("\n\tIngresar Vrms:  ");
		 scanf("%f",&Vrms); 
			printf("\n\tEl Voltaje promedio es : %.3f Vprom", Vrms/1.11);
		break;		
			case '7':printf("\n\tIngresar Vp:  ");
		 scanf("%f",&Vp); 
			printf("\n\tEl Voltaje pico-pico es : %.3f Vpp", Vp *2);
		break;		
			case '8':printf("\n\tIngresar Vpp:  ");
		 scanf("%f",&Vpp); 
			printf("\n\tEl Voltaje pico es es : %.3f Vp", Vpp/2);
		break;				
}
		getch();
}

