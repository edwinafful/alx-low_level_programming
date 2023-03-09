#include "main.h"
/**
 * _strlen_recursion - Return the lenght of a string
 * @s: the string to measured
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
