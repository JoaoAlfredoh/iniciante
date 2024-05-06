// Questão 13) Criar um programa que leia o numerador e o denominador de uma fração e transformá-lo em um número decimal. 
// Mostre esse resultado.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float a, b, c;
	
	printf ("Digite um número para o numerador: ");
	scanf ("%f", &a);
	printf ("Digite um número para o denominador: ");
	scanf ("%f", &b);
	
	c = a/b;

	printf ("O resultado decimal da fração é: %.2f", c);
	
return 0;
}

