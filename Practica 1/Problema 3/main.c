#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r,h,g,A,V;
	const float Pi=3.1416;
	printf("Ingresar el radio y la altura \n");
	scanf("%f,",&r);
	scanf("%f,",&h);
	g=sqrt(r*r+h*h);
	A=(2*Pi*r*(g/2))+(Pi*r*r);
	V=(Pi*r*r*h)/3;
	printf("Area total %.2f y Volumen total %.2f",A,V);
	return 0;
}

