#include "main.h"
/**
* _strlen -  returns the lenght of a string
* @s: the pointer
* Return: lenght of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
