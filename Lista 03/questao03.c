#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");
	
	int num, numMa;
	
	numMa = 0; //quando queremos saber o maior valor possível, inicializamos com o menor valor possível
	
	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	while (num>0) {
		
		if (num>numMa)
		numMa = num;
	
	printf ("Digite um número:\n ");
	scanf ("%d", &num);
	
	}
	
	printf ("O maior número é: %d", numMa);

}

