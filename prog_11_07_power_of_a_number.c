#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int num, pow, result;
	printf("enter the no. and its power:");
	scanf("%d %d",&num ,&pow);
	result = power(num, pow);
	printf("power of %d to %d is :%d", num, pow, result);
	getch();
	return 0;	
}
int power(int num,int pow)
{
	int i, count;
	count = num;
	for(i = 0; i < (pow-1); i++)
	{
		num = num * count;
	}
	return num;
	
}
