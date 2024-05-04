// Quest�o 17) Escreva um programa que leia o c�digo de um determinado produto e mostre a sua 
// classifica��o conforme as seguintes regras: (1) 1 - Alimento n�o-perec�vel; (2) 2, 3 ou 4 
// - Alimento perec�vel; (3) 5 ou 6 � Vestu�rio; (4) 7 - Higiene pessoal; (5) 8, 9, 10 - Utens�lios 
// dom�sticos ou (6) qualquer outro c�digo � considerado inv�lido.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	int prod; 
	
	printf ("Digite o c�digo do produto: ");
	scanf ("%d", &prod);
	
	switch (prod) {
		
		case 1:
			printf ("Alimento n�o-perec�vel");
		break;
		
		case 2:
		case 3:
		case 4:
			printf ("Alimento perec�vel");
		break;
		
		case 5:
		case 6:
			printf ("Produto de Vestu�rio");
		break;
		
		case 7:
			printf ("Produto de Higiene Pessoal");
		break;
		
		case 8:
		case 9:
		case 10:
			printf ("Utens�lios dom�sticos");
		break;
	
	default:
		printf ("C�digo inv�lido, reinicie o programa");
	}

return 0;
}
