/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/



#include <stdio.h>
#include <stdint.h> // Para usar tipos de datos de tamaño fijo

// Definición de los códigos de operación (OpCodes)
typedef enum {
    ALU_ADD = 0,
    ALU_SUB = 1,
    ALU_AND = 2,
    ALU_OR  = 3,
    ALU_XOR = 4,
    ALU_NOT = 5
} ALU_Op;

// Estructura para el resultado y las banderas de estado (flags)
typedef struct {
    uint8_t result;
    uint8_t carry;
    uint8_t zero;
} ALU_Output;

// Función de la ALU
ALU_Output alu_operation(uint8_t a, uint8_t b, ALU_Op op) {
    ALU_Output out = {0, 0, 0};
    uint16_t temp_res = 0; // Usado para detectar carry

    switch (op) {
        case ALU_ADD:
            temp_res = (uint16_t)a + (uint16_t)b;
            out.result = (uint8_t)temp_res;
            out.carry = (temp_res > 0xFF); // Bandera de acarreo
            break;
        case ALU_SUB:
            out.result = a - b;
            out.carry = (a < b); // Bandera de préstamo
            break;
        case ALU_AND:
            out.result = a & b;
            break;
        case ALU_OR:
            out.result = a | b;
            break;
        case ALU_XOR:
            out.result = a ^ b;
            break;
        case ALU_NOT:
            out.result = ~a;
            break;
        default:
            out.result = 0;
    }

    // Actualizar bandera de cero
    out.zero = (out.result == 0);

    return out;
}

int main() {
    uint8_t a = 15; // 0000 1111
    uint8_t b = 2;  // 0000 0010
    ALU_Output res;

    // Realizar una suma
    res = alu_operation(a, b, ALU_ADD);
    printf("Suma: %d + %d = %d (Carry: %d, Zero: %d)\n", a, b, res.result, res.carry, res.zero);

    // Realizar operación AND
    res = alu_operation(a, b, ALU_AND);
    printf("AND: %d & %d = %d\n", a, b, res.result);

    return 0;
}
