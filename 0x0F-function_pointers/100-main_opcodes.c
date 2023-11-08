#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - print the opcodes of this program
* @a: the address of the main function
* @n: the number of bytes to be printed
*
* Return: void
*/
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: argument vector
* Return: always O
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
