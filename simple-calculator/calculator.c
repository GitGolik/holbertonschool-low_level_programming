#include <stdio.h>
#include <math.h>

/**
 *
 */
int main(void)
{
	int choice;
	float mynum, mynum2, result;

	printf("Simple calculator: Choose your calcul\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) quit\n");
	scanf("%d", &choice);

	while (choice != 0)
	{
		if (choice == 1)
		{
			printf("Choice: 1 , enter your numbers :\nA : ");
			scanf("%f", &mynum);
			printf("B : ");
			scanf("%f", &mynum2);
			result = mynum + mynum2;
			printf("Result: %.1f\n", result);
		}
		else if (choice == 2)
		{
			printf("choice: 2 , enter your numbers :\nA : ");
			scanf("%f", &mynum);
			printf("B : ");
			scanf("%f", &mynum2);
			result = mynum - mynum2;
			printf("Result: %.1f\n", result);
		}
		if (choice > 4)
		{
			printf("Invalid choice\n");
			choice = 0;
		}
	}
	printf("Bye!\n");
	return (0);
}
