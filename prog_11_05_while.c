#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int i = 0, j = 10;
	function(i, j);
	getch();
	return 0;
}
int function(int i, int j)
{
	while(i < 10 || j >= 0)
	{
		printf("  %d \t %d \n",i ,j);
		i++;
		j--;
	}
	
}
