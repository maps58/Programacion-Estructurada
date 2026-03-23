/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include<stdio.h>
int main() {
    char operacion;
    double n1, n2;
    printf("Seleccionar la operacion (+, -, *, /): ");
    scanf("%c", &operacion);
    printf("Ingrese los 2 operandos con formato A,B \n :");
    scanf("%lf, %lf",&n1, &n2);

    switch(operacion)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // El operador no matchea con ninguno +, -, *, /
        default:
            printf("Error!!! el operador es incorrecto");
    }
    return 0;
}

