#include <stdio.h>
#include <math.h>

/**
 *
 */
int main(void)
{
	int start;
	int mynum;
	int mynum2;
	int sign;
	int add;
	int substract;
	int multiply;
	int divide;

	printf("Welcome , would you like to start the calculator with 1 ou quit with 0 ?\n");
		scanf("%d", &start);

	if (start == 1)
	{
		printf("Good , what's the calcul that you want to do :\n");
		scanf("%d %d %d", &mynum, &sign, &mynum2);

		if (sign == '+')
		{
			add = mynum + mynum2;
			printf("The result is : %d", add);
		}
		else if (sign == '-')
		{
			substract = mynum - mynum2;
			printf("The result is : %d", substract);
		}
		else if (sign == '/')
		{
			divide = mynum / mynum2;
			printf("The result is : %d", divide);
		}
		else if (sign == '*')
		{
			multiply = mynum * mynum2;
			printf("The result is : %d", multiply);
		}
	}
	else
		return (0);
}
