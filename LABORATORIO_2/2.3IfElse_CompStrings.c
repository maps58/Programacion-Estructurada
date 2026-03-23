

#include <stdio.h>
#include <string.h>

int main() {
    
    char componente[20];
    
	printf("\n\nPregunta: Componente pasivo que almacena energía mediante campos electricos \n\n >");	
	scanf ("%s", &componente);

    if (strcasecmp (componente, "capacitor") == 0) {
        printf("Respuesta correcta\n");
    }
     else{

        printf ("respuesta incorrecta\n");	
        printf ("Su respuesta la almacena en campos magneticos");
}
    return 0;
}

