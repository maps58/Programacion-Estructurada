/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL, "");
    int op;
    float dato;
    
    while(1){

    printf("\t\tCONVERSIONES DE UNIDADES\n\n");
    printf("\t1- Kilogramos a Gramos\n");
    printf("\t2- Kilómetros a metros\n");
    printf("\t3- Millas a Metros\n");
    printf("\t4- Metros a Milímetros\n");
    printf("\t5- toneladas a kilos\n");
    printf("\t6- Metros a Pulgadas\n");
    printf("\t7- Pulgadas a Centímetros\n");
    printf("\t8- Metros a Pies\n\n");
    printf("\tIngrese option: \n");
    scanf("%d",&op);
    
    switch (op)
    {
    case 1:
        printf("Ingrese cantidad de Kilogramos\n");
        scanf("%f",&dato);
        printf("Por %.2f Kilogramos hay %.2f gramos \n",dato,dato*1000);
        break;
    case 2:
        printf("Ingrese cantidad de Kilometros\n");
        scanf("%f",&dato);
        printf("Por %.2f Kilómetros hay %.2f Metros\n",dato,dato*1000);
        break;
    case 3:
        printf("Ingrese cantidad de Millas\n");
        scanf("%f",&dato);
        printf("Por %.2f Millas hay %.2f Metros\n",dato,dato*1609);
        break;
    case 4:
        printf("Ingrese cantidad de Metros\n");
        scanf("%f",&dato);
        printf("Por %.2f Metros hay %.2f Milímetros\n",dato,dato*1000);
        break;
    case 5:
        printf("Ingrese cantidad de toneladas\n");
        scanf("%f",&dato);
        printf("Por %.2f Toneladas hay %.2f kilogramos\n",dato,dato*1000);
        break;
    case 6:
        printf("Ingrese cantidad de Metros\n");
        scanf("%f",&dato);
        printf("Por %.2f Metros hay %.2f Pulgadas\n",dato,dato*39.37);
        break;
    case 7:
        printf("Ingrese cantidad de Pulgadas\n");
        scanf("%f",&dato);
        printf("Por %.2f Pulgadas hay %.2f Centímetros\n",dato,dato*2.54);
        break;
    case 8:
        printf("Ingrese cantidad de Metros\n");
        scanf("%f",&dato);
        printf("Por %.2f Metros hay %.2f Pies\n",dato,dato*3.28);
        break;
      
          // El operador no matchea con ninguna operación
        default:
            printf("Error!!! Código de operación incorrecto");  
    }}
    return 0;
}

