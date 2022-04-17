#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the characterfor uppercase
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'Á' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
