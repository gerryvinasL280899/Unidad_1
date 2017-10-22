#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float G,g;
	char L;
	printf("Introdusca la inicial de la medida \n");
	scanf("%c",&L);
	printf("Introdusca los grados \n");
	scanf("%f",&g);
	if (L=='c') {
		G=1.8*g+32;
		printf("La conversion es de %.2f Farenheit",G);
	}
	else {
		
		if(L=='f'){
		
		G=(g-32)*5/9; 
		printf("La conversion es de %.2f Celsius",G);
	}
}
	return 0;
}
