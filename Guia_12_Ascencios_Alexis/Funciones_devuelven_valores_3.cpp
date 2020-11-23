#include<stdio.h >
#include <stdlib.h>

int PorcHombre(int a, int b)
{
int PorcHombre;	
PorcHombre=a*100/b;
return PorcHombre;
}


int PorcMujer(int a, int b)
{
int PorcMujer;	
PorcMujer=a*100/b;
return PorcMujer;
}


int main()
{
int Hombre, Mujer, Total;
printf("Ingrese la cantidad de hombres ");
scanf("%d",&Hombre);
printf("Ingrese la cantidad de mujeres ");
scanf("%d",&Mujer);
Total=Hombre+Mujer;
printf("el porcentaje de hombres postulados es %d\n",PorcHombre(Hombre,Total));
printf("el porcentaje de mujeres postuladas es %d\n",PorcMujer(Mujer,Total));
}
