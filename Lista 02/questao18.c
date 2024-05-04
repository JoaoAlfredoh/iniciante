// Quest�o 18) Escreva um programa que calcule e apresente quanto deve ser pago por um produto 
// considerando a leitura do pre�o de etiqueta (PE) e o c�digo da condi��o de pagamento 
// (CP). Considere as seguintes regras: (1) CP = 1, � vista em dinheiro ou cheque, com 
// 10% de desconto; (2) CP = 2, � vista com cart�o de cr�dito, com 5% de desconto; (3) CP 
// = 3, em 2 vezes, pre�o normal de etiqueta sem juros e (4) CP = 4, em 3 vezes, pre�o de 
// etiqueta com acr�scimo de 10%.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	int cp;
	float pe, desc, novopreco; 
	
	printf ("Digite o pre�o da etiqueta (R$): ");
	scanf ("%f", &pe);
	
	printf ("Informe a condi��o de pagamento: ");
	scanf ("%d", &cp);
	
	switch (cp) {
		
		case 1:
		desc = pe*0.10;
		novopreco = pe - desc;
		printf ("Voc� recebeu %.2f de desconto. Total a pagar: R$ %.2f\n", desc, novopreco);
		break;
		
		case 2:
		desc = pe*0.05;
		novopreco = pe - desc;
		printf ("Voc� recebeu %.2f de desconto.\n Total a pagar: R$ %.2f\n", desc, novopreco);
		break;
	
		case 3:
		novopreco = pe/2;
		printf ("Pagamento em duas vezes, sem juros, cada parcela ficar� em: R$ %.2f\n Total a pagar: R$ %f", novopreco, pe);
		break;
		
		case 4:
		pe = pe + (pe*0.10); 
		novopreco = pe/3;
		printf ("Pagamento em tr�s vezes, com juros de 10%\n cada parcela ficar� em: R$ %.2f\n Total a pagar: %f", novopreco, pe);
		break;
	
	default:
		printf ("Erro da condi��o de pagamento, reinicie o programa!");
	}

return 0;
}

