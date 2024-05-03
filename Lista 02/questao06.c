// Quest�o 06) Escreva um programa que pergunte o dia, m�s e ano do anivers�rio de uma pessoa e 
// diga se a data � v�lida ou n�o. Caso n�o seja, diga o motivo. Considere que: (1) um dia 
// v�lido � aquele que est� entre 1 e 31. Um n�mero abaixo de 1 ou acima de 31 ser� 
// considerado inv�lido; (2) um m�s v�lido � aquele que est� entre 1 e 12. Um n�mero 
// abaixo de 1 ou acima de 12 ser� considerado inv�lido; (3) um ano de nascimento v�lido 
// � aquele que est� abaixo do ano atual.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main () {
	setlocale(LC_ALL, "");
	
	int dia, mes, ano;
	bool bdia, bmes, bano;
	
	printf ("Digite o dia do seu anivers�rio: ");
	scanf ("%d", &dia);
	
	printf ("Digite o m�s do seu anivers�rio: ");
	scanf ("%d", &mes);
	
	printf ("Digite o ano do seu anivers�rio: ");
	scanf ("%d", &ano);
	
	if (dia >= 1 && dia <= 31) 
	
		bdia = true;
	else {
	
		bdia = false;
		printf ("Dia inv�lido!\n");
	}
	
	if (mes >= 1 && mes <= 12)
		bmes = true;
	else {
		printf ("M�s inv�lido\n");
	} 
	
	if (ano < 2024)
		bano = true;
	else {
		bano = false;
		printf ("Ano inv�lido!\n");
	}
	
	if (bdia && bmes && bano) 
		printf ("A data de anivers�rio: %d/%d/%d � v�lida", dia, mes, ano);
	else {
		printf ("Data inv�lida");
	}
	
return 0;	
}
