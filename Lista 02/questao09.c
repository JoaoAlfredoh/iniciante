// Questão 09) A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os funcionários 
// com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais. 
// Faça um programa que leia o salário e o tempo de serviço de um funcionário, calcule e 
// escreva o valor do bônus recebido por ele.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL, "");
	float salario;
	int temposerv;
	
	printf ("Digite o seu salário: ");
	scanf ("%f", &salario);
	
	printf ("Digite seu tempo de serviço em anos: ");
	scanf ("%d", &temposerv);
	
	if (temposerv >= 5) {
	
		printf ("Você receberá um bônus de: %.2f\n", salario*0.20);
		printf ("Seu salário será: %.2f", salario + (salario*0.20));
	} else {
		printf ("Você receberá um bônus de: %.2f\n", salario*0.10);
		printf ("Seu salário será: %.2f", salario+(salario*0.10)); }

}
