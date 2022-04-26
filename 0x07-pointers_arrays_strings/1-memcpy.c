#include "main.h"

/**
* _memcpy - copies memory area
* @n: bytes
* @src: memory area
* @dest: memory area destination
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	return (dest);
}
