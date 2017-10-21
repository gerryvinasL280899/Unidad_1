#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Pi,Y,P,cm,M;
	printf("Introducir los pies ");
	scanf("%f",&Pi);
	Y=Pi/3;
	P=Pi*12;
	cm=P*2.54;
	M=cm/100;
	printf("\n El equivalente en Yardas es %.2f ",Y);
	printf("\n El equivalente en Pulgadas es %.2f",P);
	printf("\n El equivalente en Centimetros es %.2f",cm);
	printf("\n El equivalente en Metros es %.2f",M);
	
	return 0;
}

