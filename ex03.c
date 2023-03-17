#include <stdio.h>
/*
Faça um programa que calcule a quantidade necessária de latas de tinta para pintar 
uma parede. O programa pergunta as medidas de largura e altura da parede em 
metros e escreve quantas latas de tinta serão necessárias para pintá-la. Considere
 que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.
*/


int main (){
	
float largura, altura;

printf ("Digite a altura e em seguida a largura da parade:\n");
scanf ("%f", &altura);
scanf ("%f", &largura);

printf ("Vai precisar de %f latas de tinta\n", ((altura*largura)*0.3)/2);
	
	
	return 0; 
}
