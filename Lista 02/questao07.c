// Quest�o 07) Escreva um programa que leia 4 (quatro) notas de um aluno, calcule a m�dia e escreva 
// a m�dia calculada e uma mensagem informando que o aluno est� aprovado ou 
// reprovado. Considerar a m�dia para aprova��o maior que ou igual a 7.

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
		printf ("Aluno aprovado com m�dia: %.2f", media);
	else 
		printf ("Aluno reprovado por m�dia: %.2f", media);

return 0;
}
