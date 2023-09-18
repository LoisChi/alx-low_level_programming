#include "main.h"

/**
 * main - Entry point
 * @argv: argument
 * @argc: number of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 0;

	for (a = 1; a < argc; a++)
	{
		b = atoi(argv[1]);
		{
			if (b <= 0)
				printf("Error\n");
			return (1);
		}
		c += b;
	}
	printf("%d\n", c);
	return (0);
}
