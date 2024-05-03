#include <stdio.h>
int main (){
float vha, ad, des, sp, scd;
	printf ("Digite o valor da hora aula: ");
	scanf ("%f", &vha);
	printf ("Digite a quantidade de aulas dadas: ");
	scanf ("%f", &ad);
	des = 0.12;
	sp = vha*ad;
	scd = sp-(sp*des);
	printf ("O salario do mes sera: %.2f", scd);
return 0;
}
