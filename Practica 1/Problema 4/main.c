#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int st,h,m,s;
	printf("Ingresar los segundos totales \n");
	scanf("%i",&st);
	st=st/60;
	if (st<=60) {
	m=st;
	s=(st%60);
	}
	else {
		st=st/60;
		h=st;
		m=(h%60)*15;
		s=(st%3600)*5;
	}
	
	printf("Horas: %i  Minutos: %i  Segundos: %i",h,m,s);
	return 0;
}
