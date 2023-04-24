#include <stdio.h>
#include "main.h"
/**
 * count_and_print_digits - recursively counts and prints the digits of an integer
 *
 * @n: the integer to process
 *
 * Return: the total number of digits printed
 */
int count_and_print_digits(int n)
{
	int total_digits = 0;

	if (n == 0)
		return (_putchar('0'));

	if (n < 0)
	{
		total_digits += _putchar('-');
		n = -n;
	}

	if (n / 10)
		total_digits += print_integer(n / 10);

	total_digits += _putchar(n % 10 + '0');

	return (total_digits);
}
