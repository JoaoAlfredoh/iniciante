#include <stdio.h>
int main (){
float vp, des, vcd;
	printf ("Digite o valor do produto: ");
	scanf ("%f", &vp);
	des = 0.91;
	vcd = vp*des;
	printf ("Novo valor com desconto: %.2f\n", vcd);
return 0;
}
