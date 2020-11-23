#include<stdio.h >
#include <stdlib.h>

int NumMayor(int a, int b)
{
int NumMayor;
if(a<b)
{
NumMayor=b;
}
else
{
NumMayor=a;
}
return (NumMayor);
}



int main()
{
int Num1=0, Num2=0;
printf("Ingrese un numero ");
scanf("%d",&Num1);
printf("Ingrese otro numero ");
scanf("%d",&Num2);
if(Num1==Num2)
{
	printf("Son iguales ");	
}
else 
{
	printf("El numero mayor es %d",NumMayor(Num1, Num2));
}
}
