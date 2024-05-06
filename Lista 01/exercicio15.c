// Questão 15) Para vários tributos, a base de cálculo é o salário mínimo. 
// Fazer um programa que leia o valor do salário mínimo e o valor do salário de uma pessoa. 
// Calcular e escrever quantos salários mínimos ela ganha.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float const salmin = 1200;
	float sal, qtd;
	
	printf ("Digite seu salário: ");
	scanf ("%f", &sal);
	
	qtd = sal/salmin;
	
	printf ("Você recebe %.2f salários mínimos", qtd);
	
return 0;
}

