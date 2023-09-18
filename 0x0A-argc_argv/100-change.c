#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int m = 0;
	int a = 0;
	int n[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && m >= 0; a++)
	{
		while (m >= n[a])
		{
			m -= n[a];
			i++;
		}
	}
	printf("%d\n", i);
	return (0);
}
