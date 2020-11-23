#include<stdio.h >
#include <stdlib.h>

int RT(int a, int b, int c, int d, int e)
{
int RTotal;	
RTotal=a+b+c+d+e;
return RTotal;
}


int main()
{
int R1, R2, R3, R4, R5;
printf("Ingrese las resistencias\n");
scanf("%d",&R1);
scanf("%d",&R2);
scanf("%d",&R3);
scanf("%d",&R4);
scanf("%d",&R5);
printf("r1=%d\n",R1);
printf("r2=%d\n",R2);
printf("r3=%d\n",R3);
printf("r4=%d\n",R4);
printf("r5=%d\n",R5);
printf("la resistencia total es %d\n",RT(R1,R2,R3,R4,R5));
}
