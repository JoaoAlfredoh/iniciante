#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	float a;
	
	printf ("Digite a quantidade de ma��s: ");
	scanf ("%f", &a);
	
	if (a < 12) {
		printf ("Voc� n�o ter� desconto, cada ma�� sair� por: R$ 0,30\n");
		printf ("Voc� levar� %.f ma��s por: R$ %.2f\n", a, a*0.30);
	} else { 
		printf ("Voc� ter� desconto, cada ma�� sair� por: R$ 0,25\n");
		printf ("Voc� levar� %.f ma��s por: R$ %.2f\n", a, a*0.25);
		}
return 0;	
}
