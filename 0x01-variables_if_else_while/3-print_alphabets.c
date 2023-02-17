#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');

	for (a = 'A'; a <= 'Z' ; a++)
                putchar(a);
        putchar('\n');
	return (0);
}
