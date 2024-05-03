// Questão 07) Escreva um programa que leia 4 (quatro) notas de um aluno, calcule a média e escreva 
// a média calculada e uma mensagem informando que o aluno está aprovado ou 
// reprovado. Considerar a média para aprovação maior que ou igual a 7.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float nota1, nota2, nota3, nota4, media;
	
	printf ("Digite as quatro notas do aluno: ");
	scanf ("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	if (media >= 7)
		printf ("Aluno aprovado com média: %.2f", media);
	else 
		printf ("Aluno reprovado por média: %.2f", media);

return 0;
}
