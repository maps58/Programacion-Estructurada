/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
   char clave1[12];
   char clave2[12];
   
   while(1){  
   system("COLOR F3");
   printf("\n\tingrese su clave a guardar:    ");
   scanf("%12s", clave1);
   printf("\t\nSu clave de acceso ha sido guardada con exito:\n");
   {
   	Sleep(10);
   	system("cls");   	
   }
      printf("Escriba su clave de acceso:\n ");
      scanf("%12s", clave2); // Solo admitirá 12 caracteres
   if (strcmp(clave2, clave1)==0){   // esta función compara cadenas
      printf("La clave es correcta");
   }
   else{
      printf("La clave es incorrecta\n");
      printf("acceso negado\a");
   }}
   return 0;
}



