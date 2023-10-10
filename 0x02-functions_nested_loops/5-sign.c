/**
* print_sign -  a function that prints the sign of a number
* @n: (int) the number to be checked
* Return: (Prints) 1 (+), -1 (-), 0 (0) if n is greater, less or equal to 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
