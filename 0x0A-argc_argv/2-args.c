#include <stdio.h>
#include "main.h"
/**
 * main- print the name of the program
 * @argc: count argument
 * @argv: Argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring of variable*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
}
