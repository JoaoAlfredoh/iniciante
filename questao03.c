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
			printf ("O n�mero %d � maior que o n�mero %d", a, b);
		} else {
			printf ("O n�mero %d � maior que o n�mero %d", b, a);
		}
		} 
    	
return 0;
}
