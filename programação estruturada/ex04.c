#include <stdio.h>

//Escreva um algoritmo para ler as dimens�es de um ret�ngulo 
//(base e altura), calcular e escrever a �rea do ret�ngulo.

int main () {

int altura, largura;
	
printf ("Digite a altura e em seguida a largura do retangulo:\n");
scanf ("%d", &altura);
scanf ("%d", &largura);

printf ("O retangulo tem %d metros quadrados", altura*largura);

	
	return 0; 
}
