#include "main.h"
/**
 * print_numbers - prints the numbers except 4,2
 *
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{       if (i != '2' && i != '4')
		    _putchar(i);
	}
	_putchar('\n');
}
