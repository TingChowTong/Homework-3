#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h;
	float r;
	float s;

	printf("Enter the hours worked(-1 to end):");
	scanf_s("%d", &h);
	printf("Enter hourly rate of the worker:");
	scanf_s("%f", &r);
	
	while (h != -1)
	{
		if (h <= 40)
		{
			s = h * r;
			printf("Salary is $%0.2f\n", s);
			printf("Enter the hours worked(-1 to end):");
			scanf_s("%d", &h);
			printf("Enter hourly rate of the worker:");
			scanf_s("%f", &r);
		}

		else
		{
			s = ((40 * r) + ((h - 40) * r * 1.5));
			printf("Salary is $%0.2f\n", s);
			printf("Enter the hours worked(-1 to end):");
			scanf_s("%d", &h);
			printf("Enter hourly rate of the worker:");
			scanf_s("%f", &r);
		}
	}
	system("pause");
	return 0;
}
