#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");
	
	int num, soma;
	
	soma = 0;
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	
	while (num>0) {
	
		soma = soma += num;
	
		printf ("\nDigite um n�mero: ");
		scanf ("%d", &num);
	
	}
	
	printf ("\nO somat�rio �: %d", soma);
}
