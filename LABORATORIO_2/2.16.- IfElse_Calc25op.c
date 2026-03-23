/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
setlocale (LC_ALL,"");
float x,y,resultado;
int opc;

printf("\tINSTITUTO TECNOLOGICO DE OAXACA\n");
printf("Bienvenido a la calculadora de 25 funciones\n\n");
printf("Primero ingresar los 2 operandos y posteriormente\n");
printf("seleccionar la operación a ejecutar\n");

    do{           
    printf("Ingresar el primer operando: ");
    scanf("%f",&x);
    printf("\nIngresar el segundo operando: ");
    scanf("%f",&y); 
	
	printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir" );
	printf("\n5.(comparar)Indicar el mayor");
	printf("\n6.Raiz cuadrada del primer número");
	printf("\n7.Raiz cuadrada del segundo número");
	printf("\n8.Cuadrado del primer número");
	printf("\n9.Cuadrado del segundo número");
	printf("\n10.Raiz cubica del primer número");
	printf("\n11.Raiz cubica del segundo número");
	printf("\n12.Coseno del primer número");
	printf("\n13.Coseno del segundo número");
	printf("\n14.Seno del primer número");
	printf("\n15.Seno del segundo número");
	printf("\n16.Tangente del primer número");
             printf("\n17.Tangente del segundo número");
	printf("\n18.Cubo del primer número");
	printf("\n19.Cubo del segundo número");
	printf("\n20.Inversa del primer número");
	printf("\n21.Inversa del segundo número");
	printf("\n22.Logaritmo base 10 del primer número");
	printf("\n23.Logaritmo base 10 del segundo número");
	printf("\n24.Logaritmo neperiano del primer número");
	printf("\n25.Logaritmo neperiano del segundo número");
	printf("\n0.Salir\n");
             printf("\nSeleccionar la operación a ejecutar (0 para salir):  ");
             scanf("%d",&opc);
           
               
       if(opc==1){
             resultado=x+y;
            printf("La suma de ambos números es %.2f\n\n",resultado);}
	else if(opc==2){
           resultado=x-y;
             printf("La diferencia de ambos números es %.2f\n\n",resultado);}
	else if(opc==3){
         resultado=x*y;
         printf("El producto de ambos números es %.2f\n\n",resultado);}
	else if(opc==4){
          resultado=x/y;
         printf("El cociente de la razón de ambos números es %.2f\n\n",resultado);}
         else if(opc==5){
                if(x>y){
               printf("El mayor es %.2f\n\n",x);}
	else if(y>x){
             printf("El mayor es %.2f\n\n",y);}
		 else{
            printf("ambos números son iguales.\n\n");}
         }
    else if(opc==6){
         resultado=sqrt(x);
         printf("La raiz cuadrada del primer número es %.2f\n\n",resultado);}
   else if(opc==7){
         resultado=sqrt(y);
         printf("La raiz cuadrada del segundo número es %.2f\n\n",resultado);}
    else if(opc==8){
         resultado=x*x;
         printf("El cuadrado del primer número es %.2f\n\n",resultado);}
	else if(opc==9){
         resultado=y*y;
         printf("El cuadrado del segundo número es %.2f\n\n",resultado);}
	else if(opc==10){
         resultado=cbrt(x);
         printf("La raiz cubica del primer número es %.2f\n\n",resultado);}
	else if(opc==11){
         resultado=cbrt(y);
        printf("La raiz cubica del segundo número es %.2f\n\n",resultado);}
	else if(opc==12){
         resultado=cos(x);
         printf("El coseno del primer número es %.2f\n\n",resultado);}
	else if(opc==13){
         resultado=cos(y);
         printf("El coseno del segundo número es %.2f\n\n",resultado);}
	else if(opc==14){
         resultado=sin(x);
         printf("El seno del primer número es %.2f\n\n",resultado);}
	else if(opc==15){
         resultado=sin(y);
         printf("El seno del segundo número es %.2f\n\n",resultado);}
	else if(opc==16){
         resultado=tan(x);
         printf("La tangente del primer número es %.2f\n\n",resultado);}
	else if(opc==17){
         resultado=tan(y);
         printf("La tangente del segundo número es %.2f\n\n",resultado);}
	else if(opc==18){
         resultado=x*x*x;
         printf("El cubo del primer número es %.2f\n\n",resultado);}
	else if(opc==19){
         resultado=y*y*y;
         printf("El cubo del segundo número es %.2f\n\n",resultado);}
	else if(opc==20){
         resultado=1/x;
         printf("La inversa del primer número es %.2f\n\n",resultado);}
	else if(opc==21){
         resultado=1/y;
         printf("La inversa del segundo número es %.2f\n\n",resultado);}
	else if(opc==22){
         resultado=log10(x);
         printf("El logaritmo base_10 del primer número es %.2f\n\n",resultado);}
	else if(opc==23){
         resultado=log10(y);
         printf("El logaritmo base_10 del segundo número es %f\n\n",resultado);}
	else if(opc==24){
         resultado=log(x);
         printf("El logaritmo neperiano del primer número es %.2f\n\n",resultado);}
	else if(opc==25){
         resultado=log(y);
         printf("El logaritmo neperiano del segundo número es %.2f\n\n",resultado);}
	else if(opc==0){
         printf("\tEXIT!!!!!!!!!!!.\n\n");}
	else{
         printf("Código de operación no existe.\n\n");}
         }
		 while(x!=0);
}

