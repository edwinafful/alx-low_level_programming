#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry level application
 * Return: Always (0) (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar (n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
