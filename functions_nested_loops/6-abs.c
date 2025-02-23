#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @i: Number target
 *Return: Always 0 (Succes)
 */
int _abs(int i)
{

	if (i < 0)
	{
	int abs_val;

	abs_val = i * -1;
	return (abs_val);
	}
	return (i);
}
