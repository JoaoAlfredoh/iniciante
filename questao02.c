#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int idade;
	
	printf ("Digite a sua idade: ");
	scanf ("%d", &idade);
	
	if (idade >= 18)
		printf ("A pessoa pode comprar bebida alco�lica");
	else 
		printf ("A pessoa � menor idade, n�o pode comprar bebida alco�lica");
	

return 0;
}
