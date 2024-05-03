// Questão 15) Escreva um programa que leia a altura (em m) e o peso (em Kg) de uma pessoa, calcule 
// e escreva a sua situação com relação a obesidade. Considere que o IMC = peso/altura2. 
// A situação é definida com base nas seguintes classificações: 
// (1) Valores de IMC abaixo de 18,5: ADULTO COM BAIXO PESO; 
// (2) Valores de IMC maior ou igual a 18,5 e menor que 25,0: ADULTO COM PESO ADEQUADO. 
// (3) Valores de IMC maior ou igual a 25,0 e menor que 30,0: ADULTO COM SOBREPESO
// (4) Valores de IMC maior ou igual a 30,0: ADULTO COM OBESIDADE. 
// Por exemplo, uma entrada para altura = 1,77 e peso = 82,45 a situação será ADULTO COM SOBREPESO.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	float alt, peso, imc;
	
	printf ("Digite sua altura: ");
	scanf ("%f", &alt);
	printf ("Digite seu peso: ");
	scanf ("%f", &peso);
	
	imc = peso/(alt*alt);
	
	if (imc <= 18.5) {
		printf ("O seu IMC é: %.2f\n", imc);
		printf ("Adulto com peso abaixo!\n");
		} else if (imc >= 18.5 && imc < 25.0 ) {
			printf ("O seu IMC é: %.2f\n", imc);
			printf ("Adulto com peso adequado!\n");
			} else if (imc >= 25.0 && imc < 30.0) {
				printf ("O seu IMC é: %.2f\n", imc);
				printf ("Adulto com sobrepeso!\n");
				} else {
					printf ("O seu IMC é: %.2f\n", imc);
					printf ("Adulto com obesidade!\n");
					}

return 0;
}

