#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float d,h,D,P,a,V;
	int A;
	const float g=9.81;
	const float pi=3.1416;
	printf("Este programa determina el volumen de un pozo \n");
	printf("Introducir el diametro del pozo \n");
	scanf("%f",&d);
	printf("Introducir la presion hidrostatica \n");
	scanf("%f",&P);
	printf("Seleccione que liquido se utilizo \n");
	printf("Opcion 1: Agua \n");
	printf("Opcion 2: Diesel \n");
	scanf("%i",&A);
	(A==1)?(D=1000*10*P):(D=820*10*P);
	h=P/(D*g);
	a=(d/2)*(d/2)*pi;
	V=a*h;
	pritnf("El volumen total del pozo es %.2f ",V);
	return 0;
}

