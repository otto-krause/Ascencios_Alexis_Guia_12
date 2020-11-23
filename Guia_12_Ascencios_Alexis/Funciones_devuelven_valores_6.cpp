#include<stdio.h >
#include <stdlib.h>

int octava(int a)
{
int octava;	
octava=a/8;
return octava;
}


int main()
{
int Num;
printf("Ingrese un numeron ");
scanf("%d",&Num);
printf("la octava parte es %d\n",octava(Num));
}
