// Questão 06) Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e 
// diga se a data é válida ou não. Caso não seja, diga o motivo. Considere que: (1) um dia 
// válido é aquele que está entre 1 e 31. Um número abaixo de 1 ou acima de 31 será 
// considerado inválido; (2) um mês válido é aquele que está entre 1 e 12. Um número 
// abaixo de 1 ou acima de 12 será considerado inválido; (3) um ano de nascimento válido 
// é aquele que está abaixo do ano atual.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main () {
	setlocale(LC_ALL, "");
	
	int dia, mes, ano;
	bool bdia, bmes, bano;
	
	printf ("Digite o dia do seu aniversário: ");
	scanf ("%d", &dia);
	
	printf ("Digite o mês do seu aniversário: ");
	scanf ("%d", &mes);
	
	printf ("Digite o ano do seu aniversário: ");
	scanf ("%d", &ano);
	
	if (dia >= 1 && dia <= 31) 
	
		bdia = true;
	else {
	
		bdia = false;
		printf ("Dia inválido!\n");
	}
	
	if (mes >= 1 && mes <= 12)
		bmes = true;
	else {
		printf ("Mês inválido\n");
	} 
	
	if (ano < 2024)
		bano = true;
	else {
		bano = false;
		printf ("Ano inválido!\n");
	}
	
	if (bdia && bmes && bano) 
		printf ("A data de aniversário: %d/%d/%d é válida", dia, mes, ano);
	else {
		printf ("Data inválida");
	}
	
return 0;	
}
