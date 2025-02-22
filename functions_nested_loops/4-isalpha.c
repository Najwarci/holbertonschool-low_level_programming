#include "main.h"
/**
 * _isalpha - Checks if a character is a lowercase letter
 * @c: The character to test
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if(c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
