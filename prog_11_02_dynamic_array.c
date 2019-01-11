#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
		int count = 1;
	int element, i,j,array[count];
	printf("if you want to stop please press 111:\n");
	printf("\nenter the values to array:");
	for(i = 0; i < count; ++i )
	{
		scanf("%d", &element);
		array[i] =	 element;
		if(element == 111)
		break;	
		++count;	
	}
	printf("%d\n", count);
	for(j = 0; j < count; j++)
	printf("%d   ", array[j]);
	getch();
	return 0;
}

