// Quest�o 10) Escreva um programa para determinar se um ano � bissexto ou n�o. As regras s�o as
// seguintes: (1) caso 1: � um n�mero divis�vel por 4, mas n�o � divis�vel por 100 e (2) caso
// 2: � um n�mero divis�vel por 4, por 100 e por 400.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	
	int ano;
	
	printf ("Digite um ano: ");
	scanf ("%d", &ano);
		
	//primeiro caso:
	if ((ano % 4 == 0) && !(ano % 100 == 0))
		printf ("O ano � bissexto");
		
	else 
	//segundo caso:
		if ( (ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0)) 
		printf ("O ano � bissexto");

		else 
		printf ("O ano n�o � bissexto");
		
}
