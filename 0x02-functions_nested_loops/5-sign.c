# include "main.h"
/**
 * print_sign - checks the sign of a number
 * @n: number to be checked
 * Return: returns 1 and prints +
 * if n is positive
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if
 * n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
