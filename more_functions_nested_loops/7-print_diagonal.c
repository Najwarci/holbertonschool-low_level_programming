#include "main.h"
/**
 * print_diagonal - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 *
 * Return: Nothing (void function)
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
		{
		_putchar('\\');
		}
	for (i = 0; i < n; i++)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
