#include <stdio.h>

/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário. */


int main (){
	
float salario, percentual;

printf ("Digite o salario atual: \n");
scanf ("%f", &salario);
printf ("Digite o percentual de reajuste: \n");
scanf ("%f", &percentual);  

printf ("O salario reajustado eh: %f", (salario*(percentual/100)) + salario); 
	
	return 0; 
}
