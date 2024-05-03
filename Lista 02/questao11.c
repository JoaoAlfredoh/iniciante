// Questão 11) Escreva um programa que leia 2 números, calcule e apresente o resultado de uma das 
// 4 (quatro) operações básicas (soma, subtração, multiplica ou divisão) escolhida pelo 
// usuário.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	char c;
	int a,b,d;
	
	printf ("Qual operação você deseja realizar? Adição (+), Subtração (-), Multiplicação(*), ou divisão(/)?\n");
	scanf ("%c", &c);
	
	printf ("Digite o primeiro número: ");
	scanf ("%d", &a);
	
	printf ("Digite o segundo número: ");
	scanf ("%d", &b);
	
	switch (c) {
		
		case '+':
			d=a+b;
			printf ("A soma dos números %d e %d é: %d", a,b,d);
		break;
		
		case '-':
			d=a-b;
			printf ("A subtração dos números %d e %d é: %d", a,b,d);
		break;
		
		case '*':
			d=a*b;
			printf ("A multiplicação dos números %d e %d é: %d", a,b,d);
		break;
		
		case '/':
			if (b==0) {
				printf("O segundo número não pode ser 0");
				} else {
					d=a/b;
					printf ("A divisão dos números %d e %d é: %d", a,b,d);
				}
		break;
		
		default:
		   printf ("Somente é possível realizar as operações acima.");
		}
}
