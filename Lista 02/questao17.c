// Questão 17) Escreva um programa que leia o código de um determinado produto e mostre a sua 
// classificação conforme as seguintes regras: (1) 1 - Alimento não-perecível; (2) 2, 3 ou 4 
// - Alimento perecível; (3) 5 ou 6 – Vestuário; (4) 7 - Higiene pessoal; (5) 8, 9, 10 - Utensílios 
// domésticos ou (6) qualquer outro código é considerado inválido.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	int prod; 
	
	printf ("Digite o código do produto: ");
	scanf ("%d", &prod);
	
	switch (prod) {
		
		case 1:
			printf ("Alimento não-perecível");
		break;
		
		case 2:
		case 3:
		case 4:
			printf ("Alimento perecível");
		break;
		
		case 5:
		case 6:
			printf ("Produto de Vestuário");
		break;
		
		case 7:
			printf ("Produto de Higiene Pessoal");
		break;
		
		case 8:
		case 9:
		case 10:
			printf ("Utensílios domésticos");
		break;
	
	default:
		printf ("Código inválido, reinicie o programa");
	}

return 0;
}
