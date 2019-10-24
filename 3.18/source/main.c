#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float s;
	float p;
	float t;

	p = 200;

	printf("Please enter your sales:");
	scanf_s("%f", &s);

	while (s != -1)
	{
		t = p + s * 0.09;
		printf("Your payday is %0.2f\n", t);
		printf("Please enter your sales:");
		scanf_s("%f", &s);

		
	}
	system("pause");
	return 0;

}