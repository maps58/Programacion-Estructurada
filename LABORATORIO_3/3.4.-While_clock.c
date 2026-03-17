#include <stdio.h>
#include <time.h> //para la funcion sleep()
#include <unistd.h>
#include <stdlib.h>

int main()
{
	 system("COLOR F1");
    int hour, minute, second;      
    printf("ingresar la hora, minutos y segundos (separados por coma)\n:  ");
    scanf("%d,%d,%d", &hour,&minute,&second); 
 
    while(1)     {     
        system("cls");   //limpia la pantalla de salida        

        //Imprime la hora in formato: HH : MM : SS 
        printf("\n\n\t\t\t\t%02d : %02d : %02d ",hour,minute,second);      
         
        //fflush(stdout);  //limpia el buffer en gcc.
        second++;         //incrementa segundos
        //actualiza hora, minutos y segundos
        if(second==60) {
            minute+=1;
            second=0;  }
        if(minute==60) {
            hour+=1;
            minute=0;   }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;     }
            sleep(1); }  //espera 1 segundo     
     return 0;
}


