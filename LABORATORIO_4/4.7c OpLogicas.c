/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//declaracion de prototipos
void desplegarMenu(void);
char leerOpcion(void);
void ejecutarOpcion(char );

int main(){    //funcion proncipal
setlocale(LC_ALL, "spanish");
char opcion;
	do{		
	desplegarMenu();
	opcion=leerOpcion();
	ejecutarOpcion(opcion);
	}while(opcion!='8');
}

void desplegarMenu(){		 
system("cls");    
    system("color 8F");
    printf("\n\n\t\t\tINSTITUTO TECNOLOGICO DE OAXACA\n");
    printf("\t\tDepartamento de Ingeniería Eléctrica y Electrónica\n");
    printf("\t\t\tMATERIA: Programación Estructurada\n");
	printf("\n\n\t\tTABLAS DE VERDAD DE LAS 7 OPERACIONES LOGICAS\n\n");
	printf("\t1. Operación Lógica AND\n");
	printf("\t2. Operación Lógica OR\n");
	printf("\t3. Operación Lógica NOT\n");
	printf("\t4. Operación Lógica NAND\n");
	printf("\t5. Operación Lógica NOR\n");
	printf("\t6. Operación Lógica X0R\n");
	printf("\t7. Operación Lógica XNOR\n");
	printf("\t8. Salir\n");
	printf("\n\n\tSeleccionar opción:  ");
	}
	
char leerOpcion(){
char c;
	do{
	c = getch();
	if(c>='1'&&c<='8')
	printf("%c",c);
	}
	while(c<'1'||c>'8');
	return c;
	}

void ejecutarOpcion(char opcion){
int i, ans;	
int a[4] = { 0, 0, 1, 1};
int b[4] = { 0, 1, 0, 1};
	
	switch(opcion){		
	case '1': printf("\n\n\t *** AND ***");
	
    	for (i = 0; i < 4; i++) {
        	if (a[i] == 1 && b[i] == 1)
            	ans = 1;
        	else ans = 0;   
	   			printf("\n\t%d AND %d = %d", a[i], b[i], ans);
	   		
    }      
	 break;
	 	
	case '2': printf("\n\n\t *** OR ***");
    	for (i = 0; i < 4; i++) {    
      	  	if (a[i] == 1 | b[i] == 1)
            	ans = 1;
        	else ans = 0;               
	   			printf("\n\t %d OR %d = %d", a[i], b[i], ans);	   			
    }   
	 break;
	 	
	case '3':	printf("\n\n\t *** NOT ***");
    	for (i = 0; i < 2; i++) {    
       		if (b[i] == 1) 
            	ans = 0;
        	else ans = 1;               
	   			printf("\n\t NOT de %d = %d" , b[i], ans);	   			
    } 
	break;
	
	case '4': printf("\n\n\t *** NAND ***");
    	for (i = 0; i < 4; i++) {    
       		 if (a[i] == 1 & b[i] == 1)
            	ans = 0;
        	else ans = 1;               
	   			printf("\n\t %d NAND %d = %d", a[i], b[i], ans);	   			
    }   	
    break;
    
    case '5': printf("\n\n\t *** N0R *** ");
    	for (i = 0; i < 4; i++) {    
        	if (a[i] == 1 | b[i] == 1)
           		ans = 0;
        	else ans = 1;               
	   			printf("\n\t %d NOR %d = %d", a[i], b[i], ans);	   			
    }   	
	break;
	
	case '6' :printf("\n\n\t *** X0R ***");
    	for (i = 0; i < 4; i++) {    
       		if (a[i] != b[i])
            	ans = 1;
       		else ans = 0;               
	   			printf("\n\t %d XOR %d = %d", a[i], b[i], ans);	   			
    } 
	break;
	
	case '7': printf("\n\n\t *** XN0R ***");
    	for (i = 0; i < 4; i++) {    
        	if (a[i] != b[i])
           		ans = 0;
        	else ans = 1;               
	   			printf("\n\t %d XNOR %d = %d", a[i], b[i], ans);	   			
    } 		
}
getch();
}

