/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>

int main(){
       int a;

while(1){

        printf ("Ingrese un numero>>  ");
        scanf("%d",&a);	
    if (a%2==0) {	
	if(a%3==0)
	   printf("Numero divisible entre 2 y entre 3\n");
	else 
	   printf("Numero divisible entre 2 pero no entre 3\n"); 
	} 
      else{    
             if (a%3==0)
	    printf("Numero divisible entre 3 pero no entre 2\n");
	else
	    printf("No divisible ni entre 2 ni entre 3\n");			
			}
}
return 0;
}


