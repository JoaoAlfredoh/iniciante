//Lista 02
//Questão 02) Escreva um programa que leia a idade de uma pessoa e escreva uma mensagem se
//ela pode ou não comprar bebidas alcóolicas. Considerar a idade de 18 anos como referência.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int idade;
	
	printf ("Digite a sua idade: ");
	scanf ("%d", &idade);
	
	if (idade >= 18)
		printf ("A pessoa pode comprar bebida alcoólica");
	else 
		printf ("A pessoa é menor idade, não pode comprar bebida alcoólica");
	
return 0;
}
