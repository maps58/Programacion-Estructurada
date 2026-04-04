/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include<stdio.h>
#include<conio.h>
void f(int *a){
    *a = 5;
}

int main(){
int b=3;
printf("%d\n",b);

f(&b);
printf("%d",b);
}
	

