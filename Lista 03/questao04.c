#include <stdio.h>
#include <locale.h>
#include <limits.h>

void main (){
	setlocale(LC_ALL,"");

int num, numMn;
	
	numMn = INT_MAX; //quando queremos saber o menor valor poss�vel, inicializamos com o maior valor poss�vel
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	
	while (num > 0) {
		
		if (num<numMn)
		numMn = num;
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	
	}
	
	printf ("O menor n�mero �: %d", numMn);

}
