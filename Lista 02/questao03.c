//Lista 02
//Questão 03) Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e 
//escrever o maior deles.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int a, b;
	
	printf("Digite dois valores diferentes: ");
	scanf ("%d%d", &a, &b);
	
	if (a == b) {
		printf ("Digite dois valores diferentes");
	 } else {
		if (a > b) {
			printf ("O número %d é maior que o número %d", a, b);
		} else {
			printf ("O número %d é maior que o número %d", b, a);
		}
		} 
    	
return 0;
}
