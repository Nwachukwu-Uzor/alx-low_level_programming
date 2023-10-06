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
int i;
for (i = 0; i < 10; i++)
{
       putchar('0' + i);
       putchar(',');
       putchar(' ');
}
putchar('\n');	
return (0);
}
