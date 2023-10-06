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
char alpha[] = "0123456789";
int length = strlen(alpha);
int i;
for (i = 0; i < length; i++)
	putchar(alpha[i]);
putchar('\n');
return (0);
}
