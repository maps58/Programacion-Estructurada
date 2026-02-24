/*Nombre: Miguel Angel Pérez Solano
Grupo : E2A Materia: Programación Estructurada
Instituto Tecnologico de Oaxaca.*/
 /*Nombre: Miguel Angel Pérez Solano
Grupo : E2A Materia: Programación Estructurada
Instituto Tecnologico de Oaxaca.*/

int main() {

    bool SenTin, SenCis;
    int tin, cis;

    printf("Ingresar SensTin y SensCis (0 o 1):\n");

    if (scanf("%d,%d", &tin, &cis) != 2) {
        printf("Error en la entrada de datos\n");
        return 1;
    }

    SenTin = tin;
    SenCis = cis;

    if (!SenTin & SenCis) {
        printf("Encender bomba");
    } else {
        printf("Apagar bomba");
    }

    return 0;
}

