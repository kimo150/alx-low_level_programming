#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (i < n)
	{
		*(dest + c) = *(src + i);
		if (*(src + i) == '\0')
			break;
		c++;
		i++;
	}
	return (dest);
}

