#include <stdio.h>

int main () {
	
// realiza la suma de dos numeros

	//DEFINIR VARIABLES
	int numero1;
	int numero2;
	int suma;
	
	// ENTRADA 
	
	printf("ingrese el primer numero: ");
	scanf("%d", &numero1);
	
    printf("ingrese el segungo numero: ");
	scanf("%d", &numero2);

	// PROCESO
	suma= numero1+numero2;
	
	// SALIDA
	printf ("el resultado de la suma es: %d\n", suma);

return 0;
}
