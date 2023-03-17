#include <stdio.h>

/*
Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
*/


int main (){
	
float n1, n2, n3; 

printf ("Digite a nota 1:\n");
scanf ("%f", &n1);
printf ("Digite a nota 2:\n");
scanf ("%f", &n2);
printf ("Digite a nota 3:\n");
scanf ("%f", &n3);

printf ("A media do aluno foi: %f\n", (((n1*2)+(n2*3)+(n3*5))/10));		
	
	return 0; 
}
