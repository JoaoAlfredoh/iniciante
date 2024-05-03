// Questão 13) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma 
//mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar
//o mês em que ela nasceu). Considerar 3 situações possíveis: (1) Entre 16 anos e 
//menores que 18 anos o voto é opcional, (2) A partir de 18 anos e até 70 anos o voto é 
//obrigatório e (3) Maiores de 70 anos o voto é opcional.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL,"");
	int const ano_atual = 2024;
	int ano_aniver, idade;
	
	printf ("Digite o ano que você nasceu: ");
	scanf("%d", &ano_aniver);
	
	idade = ano_atual - ano_aniver;
	
	if (idade >= 18 && idade <= 70) 
		printf ("Você têm %d anos, voto é obrigatório!\n", idade);
	else if (idade >= 16 || idade > 70)
		printf ("Você têm %d anos, seu voto é opcional\n", idade);
	else 
		printf ("Você têm %d anos, é um bebê, não vota ainda!\n", idade);
	
	printf ("Beba água!");
return 0;	
}
