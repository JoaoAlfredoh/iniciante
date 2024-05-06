// Questão 14) Todo restaurante embora por lei não possa obrigar o cliente a pagar, cobra 10% para o garçom. 
// Fazer um programa que leia o valor gasto com despesas realizadas em um restaurante e escreva o valor total com a gorjeta.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float a, b, c; 
	
	printf ("Digite o total gasto: ");
	scanf ("%f", &a);
	
	b = a*(0.1);
	c = a+b;
	
	printf ("Total: %.2f", a);
	printf ("\nO valor dos dez por cento do garçom: %.2f", b);
	printf ("\nTotal a pagar: %.2f", c);
	
return 0;
}

