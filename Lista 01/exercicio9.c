#include <stdio.h>
int main (){
float sm, kw, vkw, vsp, des, vcd;
	printf ("Digite o salario minimo: ");
	scanf ("%f", &sm);
	printf ("Digite os quilowatts gastos: ");
	scanf ("%f", &kw);
	vkw = sm/7/10;
	vsp = kw*vkw;
	des = 0.1;
	vcd = vsp*(1-des);
	printf ("Valor de cada quilowatt = %.2f\n", vkw);
	printf ("Valor a ser pago = %.2f\n", vsp);
	printf ("Valor com desconto = %.2f\n", vcd);
return 0;
}
