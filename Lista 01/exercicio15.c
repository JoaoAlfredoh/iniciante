// Quest�o 15) Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. 
// Fazer um programa que leia o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa. 
// Calcular e escrever quantos sal�rios m�nimos ela ganha.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	float const salmin = 1200;
	float sal, qtd;
	
	printf ("Digite seu sal�rio: ");
	scanf ("%f", &sal);
	
	qtd = sal/salmin;
	
	printf ("Voc� recebe %.2f sal�rios m�nimos", qtd);
	
return 0;
}

