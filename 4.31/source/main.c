#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 5; i >= 0; i--)
	{
		for (j = 1; j <= 5 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;


}