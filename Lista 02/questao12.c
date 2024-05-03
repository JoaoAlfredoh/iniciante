//Questão 12) Tendo como entrada a altura e o sexo de uma pessoa, construa um programa que calcule 
//e imprima seu peso ideal, utilizando as seguintes fórmulas: (1) Para homens: (72.7 * 
// Altura) – 58 e (2) Para mulheres: (62.1 * Altura) – 44.7.

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	char sex;
	float alt, peso_ideal;
	
	printf ("Digite qual seu sexo: M para Masculino ou F para feminino: ");
	scanf ("%c", &sex);
	
	printf ("Digite sua altura: ");
	scanf ("%f", &alt);
	
	switch (sex){
		case 'M':
		case 'm':
		peso_ideal = (alt*72.7-(52));
		printf ("Seu peso ideal é: %.2f", peso_ideal);
		break;
		
		case 'F':
		case 'f':
		peso_ideal = (alt*62.1-(44.7));
		printf ("Seu peso ideal é: %.2f", peso_ideal);
		break;
		
	default:
		   printf ("Somente é possível realizar as operações acima.");
	} 
			
}
