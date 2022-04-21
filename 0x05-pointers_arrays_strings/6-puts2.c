#include "main.h"
/**
* puts2 - print every other character of a string
* starting with the first character
* @str: string
* Return: void
*/
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
