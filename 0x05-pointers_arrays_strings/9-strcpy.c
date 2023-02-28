#include "main.h"
/**
 * *_strcpy - Entry level
 * @dest: copy to
 * @src: copy from
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;

	int X = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; X < I; X++)
	{
		dest[X] = src[X];
	}
	dest[I] = '\0';
	return (dest);
}
