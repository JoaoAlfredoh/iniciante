// Quest�o 13) Criar um programa que leia o numerador e o denominador de uma fra��o e transform�-lo em um n�mero decimal. 
// Mostre esse resultado.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float a, b, c;
	
	printf ("Digite um n�mero para o numerador: ");
	scanf ("%f", &a);
	printf ("Digite um n�mero para o denominador: ");
	scanf ("%f", &b);
	
	c = a/b;

	printf ("O resultado decimal da fra��o �: %.2f", c);
	
return 0;
}

