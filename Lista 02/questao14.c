// 14.Fazer um programa que calcule as raízes reais de uma equação de 2º grau (ax^2+bx+c=0).

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
        printf("As raízes reais da equação são: %.2f e %.2f\n", x1, x2);
    } else if (discr == 0) {
        float x = -b / (2 * a);
        printf("A equação tem uma raiz real: %.2f\n", x);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}

