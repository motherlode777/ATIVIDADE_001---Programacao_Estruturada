#include <stdio.h>

/*
Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. 
Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5.
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
