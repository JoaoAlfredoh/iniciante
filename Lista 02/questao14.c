// 14.Fazer um programa que calcule as ra�zes reais de uma equa��o de 2� grau (ax^2+bx+c=0).

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "");
	
	int a, b, c;
	float x1, x2;
	
	printf ("Digite o valor de a: ");
	scanf ("%d", &a);
	
	printf ("Digite o valor de b: ");
	scanf ("%d", &b);
	
	printf ("Digite o valor de c: ");
	scanf ("%d", &c);
	
	float discr = b * b - 4 * a * c;

    if (discr > 0) {
        float x1 = (-b + sqrt(discr)) / (2 * a);
        float x2 = (-b - sqrt(discr)) / (2 * a);
        printf("As ra�zes reais da equa��o s�o: %.2f e %.2f\n", x1, x2);
    } else if (discr == 0) {
        float x = -b / (2 * a);
        printf("A equa��o tem uma raiz real: %.2f\n", x);
    } else {
        printf("A equa��o n�o possui ra�zes reais.\n");
    }

    return 0;
}

