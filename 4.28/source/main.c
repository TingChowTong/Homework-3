#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char worker;
	int  hours;
	float sales;
	int piece;
	float pay;

	printf("What is your class:");
	scanf_s("%c", &worker);
	
	switch (worker)
	{
		case '1':
			printf("Your pay is $600 per week.\n");
			break;

		case '2':
			scanf_s("%d", &hours);
			if (hours <= 40)
			{
				pay = hours * 10;
				printf("Your pay is $%.2f.", pay);
				break;
			}
			else
			{
				pay = (hours * 10) + ((hours - 40) * 10 * 1.5);
				printf("Your pay is $%.2f.", pay);
				break;
			}

		case'3':
			scanf_s("%f", &sales);
			pay = 250 + (sales * 0.057);
			printf("Your pay is $%.2f", pay);
			break;

		case'4':
			scanf_s("%d", &piece);
			pay = 20 * piece;
			printf("Your pay is $%.2f", pay);
			break;
	}
	system("pause");
	return 0;



}