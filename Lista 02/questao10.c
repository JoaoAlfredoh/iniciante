// Questão 10) Escreva um programa para determinar se um ano é bissexto ou não. As regras são as
// seguintes: (1) caso 1: É um número divisível por 4, mas não é divisível por 100 e (2) caso
// 2: É um número divisível por 4, por 100 e por 400.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	
	int ano;
	
	printf ("Digite um ano: ");
	scanf ("%d", &ano);
		
	//primeiro caso:
	if ((ano % 4 == 0) && !(ano % 100 == 0))
		printf ("O ano é bissexto");
		
	else 
	//segundo caso:
		if ( (ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0)) 
		printf ("O ano é bissexto");

		else 
		printf ("O ano não é bissexto");
		
}
