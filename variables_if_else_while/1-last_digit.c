#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
	printf("Last digit of is greater than 5\n");
	}
	else if (last_digit == 0)
	{
	printf("Last digit of is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("Last digit of is less than 6 and not 0\n");
	}
	printf("\n");

	return 0;
}
