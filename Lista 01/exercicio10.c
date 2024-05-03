#include <stdio.h>
int main (){
float raio, area, perimetro;
	printf ("Digite o raio ");
	scanf ("%f", &raio);
    perimetro = 2*(3.14*raio);
    area = 3.14*raio*raio;
	printf ("perimetro= %.f\n", perimetro); 
	printf ("area= %.f\n", area);
return 0;
}
