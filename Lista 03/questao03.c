#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");
	
	int num, numMa;
	
	numMa = 0; //quando queremos saber o maior valor poss�vel, inicializamos com o menor valor poss�vel
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	
	while (num>0) {
		
		if (num>numMa)
		numMa = num;
	
	printf ("Digite um n�mero:\n ");
	scanf ("%d", &num);
	
	}
	
	printf ("O maior n�mero �: %d", numMa);

}

