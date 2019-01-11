#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int value;
	printf("enter a value:");
	scanf("%d", &value);
	increment(value);	
}
int increment(int num)
{
	/*printf("num++ = %d", num++);
	printf(" after num++ = %d", num);
	printf("num-- = %d", num--);
	printf(" after num-- = %d", num); 
	printf("++num = %d", ++num);
	printf(" after ++num = %d", num);*/
	printf("--num  = %d", --num);
	printf(" after --num = %d", num);
}
