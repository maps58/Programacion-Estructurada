/*Instituto Tecnológico de Oaxaca
Materia: Programación estructurada
Autor: Miguel Angel Pérez Solano
Departamento de Ingeniería Eléctrica y Electronica*/

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

