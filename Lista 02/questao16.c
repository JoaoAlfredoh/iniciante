// 16.Escreva um programa para aprovar empr�stimo banc�rio. Leia 3 informa��es: valor do 
// empr�stimo, n�mero de parcelas e sal�rio do solicitante. Aprovar o empr�stimo caso o 
// valor das parcelas representem no m�ximo 30% do sal�rio do solicitante. Escreva, como 
// sa�da, as mensagens EMPR�STIMO APROVADO ou EMPR�STIMO N�O APROVADO, 
// conforme for o caso.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float valoremprest, numeparc, salario, porc_sal, valemprest;
	
	printf ("Digite o valor do empr�stimo: ");
	scanf ("%f", &valoremprest);
	
	printf ("Digite o n�mero de parcelas: ");
	scanf ("%f", &numeparc);
	
	printf ("Digite seu sal�rio: ");
	scanf ("%f", &salario);
	
	porc_sal = salario*0.30;
	valemprest = valoremprest / numeparc;
	
	if (valemprest <= porc_sal) 
		printf ("EMPR�STIMO APROVADO");
	else
		printf ("EMPR�STIMO N�O APROVADO");

return 0;
}

