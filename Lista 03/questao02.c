#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");
	
	int num, soma, cont;
	float med;
	
	soma = 0;
	med = 0;
	cont = 0;
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	
	while (num>0) {
		
		soma += num;
		cont = cont + 1; 
		med = (float)soma / cont;
	
		printf ("\nDigite um n�mero: ");
		scanf ("%d", &num);
	
	}
	
	printf ("O somat�rio �: %d\n", soma);
	printf ("A m�dia �: %.2f", med);
}
