#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,x,y,r;
	printf("Meter valor x ");
	scanf("%i",&x);
	printf("\n Meter valor y ");
	scanf("%i",&y);
	printf("\n Meter valor a ");
	scanf("%i",&a);
	printf("\n Meter valor b ");
	scanf("%i",&b);
	r=(x+y)*(x+y);
	r=r*(a-b);
	printf("\n El resultado es %i",r);
	
	
	return 0;
}

