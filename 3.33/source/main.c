#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i;
	int j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if ((i == 0) || (i == 3) || (j == 0) || (j == 13))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}