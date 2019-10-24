#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int acc;
	float bal1;
	float charges;
	float cred;
	float credl;
	float new;

	printf("Please enter your account number(-1 to end):");
	scanf_s("%d", &acc);
	printf("Please enter your balance:");
	scanf_s("%f", &bal1);
	printf("Please enter your charges:");
	scanf_s("%f", &charges);
	printf("Please enter your total credit:");
	scanf_s("%f", &cred);
	printf("Enter credit limit:");
	scanf_s("%f", &credl);

	while (acc != -1)
	{
		new = bal1 + charges - cred;
		if (new > credl)
		{
			printf("Credit Limit Exceeded\n");
			printf("Please enter your account number(-1 to end):");
			scanf_s("%d", &acc);
			printf("Please enter your balance:");
			scanf_s("%f", &bal1);
			printf("Please enter your charges:");
			scanf_s("%f", &charges);
			printf("Please enter your total credit:");
			scanf_s("%f", &cred);
			printf("Enter credit limit:");
			scanf_s("%f", &credl);
		}
		else
		{
			printf("You're good to go.\n");
			printf("Please enter your account number(-1 to end):");
			scanf_s("%d", &acc);
			printf("Please enter your balance:");
			scanf_s("%f", &bal1);
			printf("Please enter your charges:");
			scanf_s("%f", &charges);
			printf("Please enter your total credit:");
			scanf_s("%f", &cred);
			printf("Enter credit limit:");
			scanf_s("%f", &credl);
		}

	}
	system("pause");
	return 0;
}