#include "main.h"

/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: program that multiplies 2 numbers
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a * b;

	if (argc != 3)
		exit(98);
	if (a <= 0 || b <= 0)
		exit(98);
	printf("%d\n", c);
	return (0);
}
