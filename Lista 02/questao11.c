// Quest�o 11) Escreva um programa que leia 2 n�meros, calcule e apresente o resultado de uma das 
// 4 (quatro) opera��es b�sicas (soma, subtra��o, multiplica ou divis�o) escolhida pelo 
// usu�rio.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	char c;
	int a,b,d;
	
	printf ("Qual opera��o voc� deseja realizar? Adi��o (+), Subtra��o (-), Multiplica��o(*), ou divis�o(/)?\n");
	scanf ("%c", &c);
	
	printf ("Digite o primeiro n�mero: ");
	scanf ("%d", &a);
	
	printf ("Digite o segundo n�mero: ");
	scanf ("%d", &b);
	
	switch (c) {
		
		case '+':
			d=a+b;
			printf ("A soma dos n�meros %d e %d �: %d", a,b,d);
		break;
		
		case '-':
			d=a-b;
			printf ("A subtra��o dos n�meros %d e %d �: %d", a,b,d);
		break;
		
		case '*':
			d=a*b;
			printf ("A multiplica��o dos n�meros %d e %d �: %d", a,b,d);
		break;
		
		case '/':
			if (b==0) {
				printf("O segundo n�mero n�o pode ser 0");
				} else {
					d=a/b;
					printf ("A divis�o dos n�meros %d e %d �: %d", a,b,d);
				}
		break;
		
		default:
		   printf ("Somente � poss�vel realizar as opera��es acima.");
		}
}
