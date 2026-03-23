/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <stdio.h>
#include <locale.h>   //para manejar acentos

int main() {
	
	printf ("\t\tCALCULADORA DE VELOCIDAD DE UN MOTOR EN FUNCION DE LA PRESION Y LA TEMPERATURA DE OPERACION\n");
	setlocale(LC_ALL, ""); // Configura la localización al idioma del sistema
    float temperatura; // grados Centigrados
    float presion_pedal;   // PSI
    int velocidad_motor;      // RPM
    
    printf ("\ningresar la temperatura del motor (típico entre 60 y 100 grados centigrados)\n >> ");
    scanf ("%f", &temperatura);
    
        // Checar condicion necesaria: Es segura la temperatura del sistema?
    if (temperatura >= 60.0 && temperatura <= 100.0) { 
        printf("\nTemperatura está en un rango seguro: %.1f C\n", temperatura);
        
        printf ("ingresar la presión del pedal\n  >>");
        scanf ("%f", &presion_pedal);

        // If...else aplicado y anidado: Basado en la presion para determinar la velocidad del motor.
        if (presion_pedal < 100.0) {
            velocidad_motor = 500;
            printf("Presión_pedal es baja (%.1f PSI).\n\nAjustando velocidad del motor a %d RPM.\n", presion_pedal, velocidad_motor);
        } else if (presion_pedal >= 100.0 && presion_pedal < 150.0) {
            velocidad_motor = 1000;
            printf("Presión es normal (%.1f PSI).\n\nAjustando velocidad del motor a %d RPM.\n", presion_pedal, velocidad_motor);
        } else {
            velocidad_motor = 1500;
            printf("Presión es alta (%.1f PSI).\n\nAjustando velocidad del motor a %d RPM.\n", presion_pedal, velocidad_motor);
        }

    } else {
        // This 'else' belongs to the outer 'if'
        printf("\nERROR CRITICO: Temperatura (%.1f C), está fuera del rango de operación seguro. Motor apagado.\n", temperatura);
        velocidad_motor = 0;
    }

    printf("Velocidad Final del Motor: %d RPM\n", velocidad_motor);
    return 0;
}

