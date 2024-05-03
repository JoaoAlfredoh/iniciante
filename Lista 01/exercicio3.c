#include <stdio.h>
int main (){
float n1,n2,n3, media;
	printf ("Digite as 3 notas: ");
	scanf ("%f%f%f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	printf ("A media das 3 notas sera: %.2f", media);
return 0;
}
