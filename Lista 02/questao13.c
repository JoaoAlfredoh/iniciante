// Quest�o 13) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma 
//mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar
//o m�s em que ela nasceu). Considerar 3 situa��es poss�veis: (1) Entre 16 anos e 
//menores que 18 anos o voto � opcional, (2) A partir de 18 anos e at� 70 anos o voto � 
//obrigat�rio e (3) Maiores de 70 anos o voto � opcional.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL,"");
	int const ano_atual = 2024;
	int ano_aniver, idade;
	
	printf ("Digite o ano que voc� nasceu: ");
	scanf("%d", &ano_aniver);
	
	idade = ano_atual - ano_aniver;
	
	if (idade >= 18 && idade <= 70) 
		printf ("Voc� t�m %d anos, voto � obrigat�rio!\n", idade);
	else if (idade >= 16 || idade > 70)
		printf ("Voc� t�m %d anos, seu voto � opcional\n", idade);
	else 
		printf ("Voc� t�m %d anos, � um beb�, n�o vota ainda!\n", idade);
	
	printf ("Beba �gua!");
return 0;	
}
