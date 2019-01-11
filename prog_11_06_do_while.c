#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int i = 10;
	do
	{
		printf("%d    ",i);
		i++;
	}
	while(i>20);
	getch();
	return 0;
}
