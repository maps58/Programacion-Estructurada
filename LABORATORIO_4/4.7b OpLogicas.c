/*Instituto Tecnologico de Oaxaca
Materia: Programacion estructurada*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4] = { 0, 0, 1, 1};
    int b[4] = { 0, 1, 0, 1};
    int i, ans;
    
	printf("Operacion AND");
    for (i = 0; i < 4; i++) {
        if (a[i] == 1 && b[i] == 1)
            ans = 1;
        else ans = 0;   
	   		printf("\n %d AND %d = %d", a[i], b[i], ans);
    }      
		
printf("\n\nOperacion OR\t");
    for (i = 0; i < 4; i++) {    
        if (a[i] == 1 | b[i] == 1)
            ans = 1;
        else ans = 0;               
	   		printf("\t\n %d OR %d = %d", a[i], b[i], ans);	   			
    }   
		
	printf("\n\nOperacion NOT");
    for (i = 0; i < 2; i++) {
    
        if (b[i] == 1) 
            ans = 0;
        else ans = 1;               
	   		printf("\t\n NOT de %d = %d" , b[i], ans);	   			
    } 
	
printf("\n\nOperacion NAND\t");
    for (i = 0; i < 4; i++) {    
        if (a[i] == 1 & b[i] == 1)
            ans = 0;
        else ans = 1;               
	   		printf("\t\n %d NAND %d = %d", a[i], b[i], ans);	   			
    }   	
    
    printf("\n\nOperacion N0R\t");
    for (i = 0; i < 4; i++) {    
        if (a[i] == 1 | b[i] == 1)
            ans = 0;
        else ans = 1;               
	   		printf("\t\n %d NOR %d = %d", a[i], b[i], ans);	   			
    }   	
	
	printf("\n\nOperacion X0R\t");
    for (i = 0; i < 4; i++) {    
        if (a[i] != b[i])
            ans = 1;
        else ans = 0;               
	   		printf("\t\n %d XOR %d = %d", a[i], b[i], ans);	   			
    } 
	
	printf("\n\nOperacion XN0R\t");
    for (i = 0; i < 4; i++) {    
        if (a[i] != b[i])
            ans = 0;
        else ans = 1;               
	   		printf("\t\n %d XNOR %d = %d", a[i], b[i], ans);	   			
    } 	
	
		      
}


