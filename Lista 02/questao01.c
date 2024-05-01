//Lista de exercícios 02 
//Questão 01) Escreva um programa que leia um número inteiro, calcule e escreva se ele é par ou ímpar.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	
	int a;
	printf ("Digite um número: ");
	scanf ("%d", &a);
	
	if (a%2 == 0)
		printf ("O número %d é par", a);
	else 
		printf ("O número %d é ímpar", a);
		
return 0;
}
