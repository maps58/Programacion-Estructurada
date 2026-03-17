/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
int main(){
	
int i,num;
printf("OPCIONES:\n\nPulse 1 para ver los caracteres imprimibles\n");
printf(" o un numero individual para saber su caracter ASCII\n\n");

	printf("introduzca un decimal, ya sea 1 o entre 33 y 126: \n");
	scanf("%d", &num);
	if (num==1){
	   for (i = 33; i<=255; i++) {
          printf("El numero %d es el caracter ASCII: %C\n", i, i);              
		  }
	}
		  else{		 
	      for(i=33; i<=126; i++);
	      i = num;
	      printf("\nEl numero %d es en codigo ASCII: %c\n ", num,i); 
		  }
return 0;
}



