#include "main.h"

/**
 * print_pointer - Prints a pointer address in hexadecimal format.
 * @args: A va_list of arguments containing a void pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *p = va_arg(args, void *);
	unsigned long int num = (unsigned long int)p;
	unsigned int count = 0;
	int i;
	char *hex_digits = "0123456789abcdef";

	if (p == NULL)
	{
		for (i = 0; "(nil)"[i] != '\0'; i++)
		{
			putchar("(nil)"[i]);
		}
		return (i);
	}

	_putchar('0');
	_putchar('x');

	count = print_hexa(num, hex_digits);
	return (count + 2);
}

/**
 * print_hex - Recursive function that prints an unsigned long int
 *            in hexadecimal format.
 * @num: The number to be printed in hexadecimal.
 * @hex_digits: A string containing the hexadecimal digits.
 *
 * Return: The number of characters printed.
 */
unsigned int print_hex(unsigned long int num, char *hex_digits)
{
	unsigned int count = 0;
	unsigned int remainder = num % 16;

	if (num / 16)
	{
		count += print_hex(num / 16, hex_digits);
	}

	_putchar(hex_digits[remainder]);
	count++;
	return (count);
}
