#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	float a;
	
	printf ("Digite a quantidade de maçãs: ");
	scanf ("%f", &a);
	
	if (a < 12) {
		printf ("Você não terá desconto, cada maçã sairá por: R$ 0,30\n");
		printf ("Você levará %.f maçãs por: R$ %.2f\n", a, a*0.30);
	} else { 
		printf ("Você terá desconto, cada maçã sairá por: R$ 0,25\n");
		printf ("Você levará %.f maçãs por: R$ %.2f\n", a, a*0.25);
		}
return 0;	
}
