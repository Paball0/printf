#include "main.h"
/**
 * printf_int - function prints an integer
 * @args: the argument to be printed
 * Return: num of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n  % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num > 9)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = n / exp;
			_putchar(digit + '0');
			num = n - (digit * exp);
			exp /= 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
