#include <stdio.h>

/*
Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/

int main (){
	
int salfixo, ncarros, valortotal, valorcarro; 

printf ("Digite em ordem o valor das seguintes coisas: salario fixo --> numero de carros vendidos --> valor total em vendas --> valor recibo por carro\n");
scanf ("%d", &salfixo);
scanf ("%d", &ncarros);	
scanf ("%d", &valortotal);	
scanf ("%d", &valorcarro);

printf ("O salario final do vendedor eh: %f\n", salfixo + (valorcarro * ncarros) + (valortotal*0.05));		
	
	return 0; 
}
