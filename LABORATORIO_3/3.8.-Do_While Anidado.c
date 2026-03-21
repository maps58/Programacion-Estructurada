/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/


#include <stdio.h>
int main(){
    int n = 0;
    printf("\tImprine un patron de numeros usando estructuras while anidadas");
	printf("\n\t\t\tde n filas con n numeros\n\n");
    printf("ingrese el valor de n: ");
    scanf ("%d",&n);
    
    int i = 1;

    while (i <= n) {
        printf("\n");
        int j = 1;
        while (j <= i) {
            printf("%d ", j);
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}








