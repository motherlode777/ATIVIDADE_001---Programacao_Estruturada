#include <stdio.h>

/*
O custo de um carro novo ao consumidor é a soma do custo de fábrica com a 
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de 
um carro, calcular e escrever o custo final ao consumidor.
*/

int main (){
	
float custofab; 
	
printf ("Qual eh o custo de fabrica do carro?\n");
scanf ("%f", &custofab);
printf ("O custo final eh: %f\n", (custofab*0.28)+(custofab*0.45)+ custofab);
	
	return 0; 
}
