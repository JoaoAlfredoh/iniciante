#include <stdio.h>
int main (){
float n1, n2, n3, n4, media;
	printf ("Digite 4 numeros: ");
	scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);
	media = (n1*1+n2*2+n3*3+n4*4)/10;
	printf ("A media ponderada sera: %.f", media);
return 0;
}
