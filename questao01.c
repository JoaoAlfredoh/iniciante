#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	
	int a;
	printf ("Digite um n�mero: ");
	scanf ("%d", &a);
	
	if (a%2 == 0)
		printf ("O n�mero %d � par", a);
	else 
		printf ("O n�mero %d � �mpar", a);
		
return 0;
}
