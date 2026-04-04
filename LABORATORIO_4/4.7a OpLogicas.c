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
	} while(opcion!='8');
}
void desplegarMenu(){		 
system("cls");    
    system("color 8F");
    printf("\n\n\t\t\tINSTITUTO TECNOLOGICO DE OAXACA\n");
    printf("\t\tDepartamento de Ingenieria Electrica y Electronica\n");
	printf("\n\n\t\tCALCULADOR DE OPERACIONES LOGICAS DE UN SOLO BIT\n\n");
	printf("\t1. Operacion Logica AND\n");
	printf("\t2. Operacion Logica OR\n");
	printf("\t3. Operacion Logica NOT\n");
	printf("\t4. Operacion Logica NAND\n");
	printf("\t5. Operacion Logica NOR\n");
	printf("\t6. Operacion Logica XOR\n");
	printf("\t7. Operacion Logica XNOR\n");
	printf("\t8. Salir\n");
	printf("\n\n\tSeleccione opcion: ");
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
int op1,op2;
	switch(opcion){
			case '1':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:", op1 & op2);
		break;		
			case '2':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:", op1 | op2);
		break;	
			case '3':printf("\n\tIngresar solo 1 bit para invertir   ");
			scanf("%d",&op1);
			printf("\n\tEl resultado es %i:", !op1);;
		break;		
			case '4':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:", !(op1 & op2));
		break;		
			case '5':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:", !(op1 | op2));
		break;		
			case '6':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:",(op1 ^ op2));
		break;		
			case '7':printf("\n\tIngresar 2 BITS separados por una coma:   ");
			scanf(" %d,%d",&op1,&op2);
			printf("\n\tEl resultado es %i:",!(op1 ^ op2));
		break;							
}
		getch();
}

