#include <stdio.h>
#include <locale.h>
#include <limits.h>

void main (){
	setlocale(LC_ALL,"");

int num, numMn;
	
	numMn = INT_MAX; //quando queremos saber o menor valor possível, inicializamos com o maior valor possível
	
	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	while (num > 0) {
		
		if (num<numMn)
		numMn = num;
	
	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	}
	
	printf ("O menor número é: %d", numMn);

}
