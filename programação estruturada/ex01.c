#include <stdio.h>

/*
Faça um programa em que o usuário digite o custo de uma 
determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete
e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa 
pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria
*/

int main () {
	
int custo, frete, despesas, valor;
float lucro; 

printf ("Digite o custo da mercadoria:\n");
scanf ("%d", &custo);

printf ("Digite o valor do frete:\n");
scanf ("%d", &frete);

printf ("Digite o valor das despesas:\n");
scanf ("%d", &despesas);

printf ("Digite o valor de venda da mercadoria:\n");
scanf ("%d", &valor);

lucro = (100*(valor-(custo+frete+despesas)))/valor; 

printf ("O lucro foi de %.2f%%", lucro);




	
	return 0; 
}
