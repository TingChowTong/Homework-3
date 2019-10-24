#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float amount;
	int years;
	float rate;
	float rate1;
	float rate2;
	float gap;
	float sum;

	printf("Enter amount:");
	scanf_s("%f", &amount);
	printf("Enter lower interest rate:");
	scanf_s("%f", &rate1);
	printf("Enter upper interest rate:");
	scanf_s("%f", &rate2);
	printf("How many years:");
	scanf_s("%d", &years);
	printf("Gap between rates:");
	scanf_s("%f", &gap);

	for (rate = rate1; rate <= rate2; rate += gap)
	{
		sum = amount + (amount * years * rate * 0.01);
		printf("Your payout:%0.2f\n", sum);
	}
	system("pause");
	return  0;
}