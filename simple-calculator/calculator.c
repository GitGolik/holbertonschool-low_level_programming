#include <stdio.h>
#include <math.h>

/**
 *
 */
int main(void)
{
	int choice;

	printf("Simple calculator: Choose your calcul\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) quit\n");
	scanf("%d", &choice);

	while (choice != 0)
	{
		if (choice > 4)
		{
			printf("Invalid choice\n");
			choice = 0;
		}
	}
	printf("Bye!\n");
	return (0);
}
