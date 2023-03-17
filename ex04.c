#include <stdio.h>

//Escreva um algoritmo para ler as dimensões de um retângulo 
//(base e altura), calcular e escrever a área do retângulo.

int main () {

int altura, largura;
	
printf ("Digite a altura e em seguida a largura do retangulo:\n");
scanf ("%d", &altura);
scanf ("%d", &largura);

printf ("O retangulo tem %d metros quadrados", altura*largura);

	
	return 0; 
}
