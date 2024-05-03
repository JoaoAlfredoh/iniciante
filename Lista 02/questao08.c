// Questão 08) Escreva um programa para verificar se um número é múltiplo de 5 e 7 ao mesmo tempo.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	int a;
	
	printf ("Digite um número: ");
	scanf ("%d", &a);
	
	if ( (a % 5 == 0) && (a % 7 == 0) )
		printf ("O número %d é múltiplo de 5 e 7", a);
	else
		printf ("O número %d não é múltiplo de 5 e 7", a);

}
