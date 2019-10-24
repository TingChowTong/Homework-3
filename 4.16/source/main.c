#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	printf("(A)\n");
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i >= 1; --i)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("C\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (i > j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 10; i >0; i--)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j>=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");

	}

	system("pause");
	return 0;
}