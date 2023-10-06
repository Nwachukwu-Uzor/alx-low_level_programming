#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
* Return: Prints all lowercase characters from a to z
*/
int main(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int length = strlen(alpha);
for (int i = 0; i < length - 1; i++)
	putchar('%c', alpha[i]);
return (0);
}
