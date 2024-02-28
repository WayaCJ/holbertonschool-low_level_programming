#include <stdio.h>
/**
 *main- Entry
 *
 *Return: 0
 */
int main(void)
{
	int number = 14, v;

	while (v != number)
	{
		printf("Try to guess the number from 1 to 20\n");
		printf("What number do you think is the secret number?  " );
		scanf("%d", &v);

		if (number > v)
		{
			printf("Too low\n");
		}
		else if (number == v)
		{
			printf("\n");
			printf("We can't believe it, you got it right. Congrats!\n");
		}
		else
		{
			printf("Too high\n");
		}
	}
	return (0);
}
