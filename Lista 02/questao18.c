// Questão 18) Escreva um programa que calcule e apresente quanto deve ser pago por um produto 
// considerando a leitura do preço de etiqueta (PE) e o código da condição de pagamento 
// (CP). Considere as seguintes regras: (1) CP = 1, à vista em dinheiro ou cheque, com 
// 10% de desconto; (2) CP = 2, à vista com cartão de crédito, com 5% de desconto; (3) CP 
// = 3, em 2 vezes, preço normal de etiqueta sem juros e (4) CP = 4, em 3 vezes, preço de 
// etiqueta com acréscimo de 10%.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	int cp;
	float pe, desc, novopreco; 
	
	printf ("Digite o preço da etiqueta (R$): ");
	scanf ("%f", &pe);
	
	printf ("Informe a condição de pagamento: ");
	scanf ("%d", &cp);
	
	switch (cp) {
		
		case 1:
		desc = pe*0.10;
		novopreco = pe - desc;
		printf ("Você recebeu %.2f de desconto. Total a pagar: R$ %.2f\n", desc, novopreco);
		break;
		
		case 2:
		desc = pe*0.05;
		novopreco = pe - desc;
		printf ("Você recebeu %.2f de desconto.\n Total a pagar: R$ %.2f\n", desc, novopreco);
		break;
	
		case 3:
		novopreco = pe/2;
		printf ("Pagamento em duas vezes, sem juros, cada parcela ficará em: R$ %.2f\n Total a pagar: R$ %f", novopreco, pe);
		break;
		
		case 4:
		pe = pe + (pe*0.10); 
		novopreco = pe/3;
		printf ("Pagamento em três vezes, com juros de 10%\n cada parcela ficará em: R$ %.2f\n Total a pagar: %f", novopreco, pe);
		break;
	
	default:
		printf ("Erro da condição de pagamento, reinicie o programa!");
	}

return 0;
}

