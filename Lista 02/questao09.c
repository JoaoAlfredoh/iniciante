// Quest�o 09) A empresa XPTO concedeu um b�nus de 20% do valor do sal�rio a todos os funcion�rios 
// com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais. 
// Fa�a um programa que leia o sal�rio e o tempo de servi�o de um funcion�rio, calcule e 
// escreva o valor do b�nus recebido por ele.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	float salario;
	int temposerv;
	
	printf ("Digite o seu sal�rio: ");
	scanf ("%f", &salario);
	
	printf ("Digite seu tempo de servi�o em anos: ");
	scanf ("%d", &temposerv);
	
	if (temposerv >= 5) {
	
		printf ("Voc� receber� um b�nus de: %.2f\n", salario*0.20);
		printf ("Seu sal�rio ser�: %.2f", salario + (salario*0.20));
	} else {
		printf ("Voc� receber� um b�nus de: %.2f\n", salario*0.10);
		printf ("Seu sal�rio ser�: %.2f", salario+(salario*0.10)); }

}
