#include<stdio.h >
#include <stdlib.h>

int Presion(int Fuer, int Area)
{
int Presion;	
Presion=Fuer/Area;
return Presion;
}

int main()
{
int Fuer, Area;
printf("Ingrese la fuerza ");
scanf("%d",&Fuer);
printf("Ingrese el area ");
scanf("%d",&Area);
printf("la presion aplicada sobre la superfice es %d\n",Presion(Fuer,Area));
}
