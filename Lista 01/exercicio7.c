#include <stdio.h>
int main (){
int n1, n2, quo, res;
	printf ("Digite 2 numeros: ");
	scanf ("%d%d", &n1, &n2);
	printf ("O dividendo: %d\n", n1);
	printf ("O divisor: %d\n", n2);
	quo = n1/n2;
	printf ("O quociente sera: %d\n", quo);
	res = n1%n2;
	printf ("O resto sera: %d\n", res);
return 0;
}
