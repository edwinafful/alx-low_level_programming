#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry level appluication
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		if (m > n)
		{
			putchar (n);
			putchar (m);
			if (n != 56 || m != 57)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
