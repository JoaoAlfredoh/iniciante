// Quest�o 08) Escreva um programa para verificar se um n�mero � m�ltiplo de 5 e 7 ao mesmo tempo.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	int a;
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &a);
	
	if ( (a % 5 == 0) && (a % 7 == 0) )
		printf ("O n�mero %d � m�ltiplo de 5 e 7", a);
	else
		printf ("O n�mero %d n�o � m�ltiplo de 5 e 7", a);

}
