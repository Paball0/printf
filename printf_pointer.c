#inlude "main.h"

/**
 * printf_pointer - function prints a hexidecimal num.
 * @val: the arguments
 * Return: the counter
 */
int_printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (1\i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_aux(a);
	return (b + 2);
}

