#include <stdio.h>

/*Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, 
meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e m�s com 30 dias.*/

int main (){
	
int ano, mes, dia;	

printf ("digite sua idade em anos, meses e dias\n");
scanf ("%d", &ano);	
scanf ("%d", &mes);	
scanf ("%d", &dia);	
printf ("Sua idade em dias eh: %d\n", (ano*365) + (mes*30) + dia);
	
	return 0;
}
