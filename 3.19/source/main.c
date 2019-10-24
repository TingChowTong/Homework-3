#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float l;
	float r;
	float c;
	int d;
	float s;

	printf("Enter loan amount(-1 to end):");
	scanf_s("%f", &l);
	printf("Enter interest rate:");
	scanf_s("%f", &r);
	printf("Enter term of loan in days:");
	scanf_s("%d", &d);

	while (l != -1)
	{
		c = l * r;
		s = c * d / 365;
		printf("Interest charge:%.2f\n", s);
		printf("Enter loan amount(-1 to end):");
		scanf_s("%f", &l);
		printf("Enter interest rate:");
		scanf_s("%f", &r);
		printf("Enter term of loan in days:");
		scanf_s("%d", &d);
	}
	system("pause");
	return 0;
}