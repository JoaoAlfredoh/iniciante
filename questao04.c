#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int const a = 1234;
	int b;
	
	printf ("Digite a sua senha: ");
	scanf ("%d", &b);
	
	if (b == a) 
		printf ("Acesso autorizado");
	else 
		printf ("Acesso negado");
			
return 0;
}
