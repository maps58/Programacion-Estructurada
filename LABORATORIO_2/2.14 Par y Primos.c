/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    int primo = 1;   // 1 = Verdadero, 0 = Falso
    int i;
    
	printf("ANALISIS SI EL NUMERO INGRESA ES PAR O IMPAR ADEMAS, SI ES PRIMO O NO\n"); 
    printf("Ingresar un numero entero : ");
    scanf("%d", &n);

    /* *********************
       Evaluando paridad
       ********************* */
    if (n % 2 == 0)
        printf("El numero ingresado es NUMERO PAR\n");
    else
        printf("El numero ingresado es NUMERO IMPAR\n");

    /* ***************************
       Evaluando primalidad
       *************************** */				
    if (n <= 1) {
        primo = 0;
    } else {
        //for (i = 2; i <= sqrt(n); i++) {
         for (i = 2; i <= n-1; i++) {	
            if (n % i == 0) {
                primo = 0;
                break;   // Sale del ciclo al encontrar divisor
            }
        }
    }

    if (primo)
        printf("El numero ingresado ES PRIMO\n");
    else
        printf("El numero ingresado NO ES PRIMO\n");

    return 0;
}
