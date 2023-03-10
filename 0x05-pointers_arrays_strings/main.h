#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
* reset_to_98 - update integer pointer n value to 98 
* @n:pointer integer
*
*/
void reset_to_98(int *n);
/**
* swap_int - swap two numbers
* @a :first number
* @b :second number
*/
void swap_int(int *a, int *b);
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s);
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str);
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */
void print_rev(char *s);
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void rev_string(char *s);
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */void puts2(char *str);

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str);
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n);
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src);
#endif
