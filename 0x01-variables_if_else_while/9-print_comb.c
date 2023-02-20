#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry level application
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar (n);
		if (n != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
