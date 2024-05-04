// 16.Escreva um programa para aprovar empréstimo bancário. Leia 3 informações: valor do 
// empréstimo, número de parcelas e salário do solicitante. Aprovar o empréstimo caso o 
// valor das parcelas representem no máximo 30% do salário do solicitante. Escreva, como 
// saída, as mensagens EMPRÉSTIMO APROVADO ou EMPRÉSTIMO NÃO APROVADO, 
// conforme for o caso.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float valoremprest, numeparc, salario, porc_sal, valemprest;
	
	printf ("Digite o valor do empréstimo: ");
	scanf ("%f", &valoremprest);
	
	printf ("Digite o número de parcelas: ");
	scanf ("%f", &numeparc);
	
	printf ("Digite seu salário: ");
	scanf ("%f", &salario);
	
	porc_sal = salario*0.30;
	valemprest = valoremprest / numeparc;
	
	if (valemprest <= porc_sal) 
		printf ("EMPRÉSTIMO APROVADO");
	else
		printf ("EMPRÉSTIMO NÃO APROVADO");

return 0;
}

