#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: the number of arguments
* @argv: the argument vector
* Return: always returns 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
