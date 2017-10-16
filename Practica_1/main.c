#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
float I,H,PH,IN,IM;
char nombre[]={};
  printf("ingresar nombre del trabajador\n");
  scanf("%s",&nombre);
  printf("\n ingresar horas trabajadas\n");
  scanf("%f",&H);
  printf("\n ingresar precio de cada hora\n");
  scanf("%f",&PH);
  I=H*PH;
  IM=0.25*I;
  IN=I-IM;
  printf("El empleado %s",nombre);
  printf("\n Reibre un ingreso %f",I);
  printf("\n El impuesto es de %f",IM);
  printf("\n Salario final %f \n",IN);
  
  system("PAUSE");	
  return 0;
}
