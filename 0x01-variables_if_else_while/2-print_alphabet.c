#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* Return: Prints all lowercase characters from a to z
*/
int main(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int length = strlen(alpha);
int i;
for (i = 0; i < length; i++)
	putchar(alpha[i]);
putchar('\n');
return (0);
}
