#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: the number of arguments
* @argv: the argument vector
* Return: always returns 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
