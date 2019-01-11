#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int num_1, num_2, num_3;
	printf("enter two values:");
	scanf("%d %d",&num_1, &num_2);
	 num_3 = (num_1 > num_2) ? num_1 : num_2;
	printf(" %d is greater",num_3);
	getch();
	return 0;
	
}


