#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int val_1, i, j, k;
	printf("enter number of rows:");
	scanf("%d", &val_1);
	for(i = 0; i <= val_1 ; i++)
	{
		for(j = val_1; j > i ; j--)
		{
			printf("  ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("  %d  ", k);
		}
		printf("\n\n");
	}
	getch();
	return 0;
	
}
