#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry level application
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
