#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n);
/**
 * helper - helps decide if i'm right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int helper(int i, int n);
/**
 * _pow_recursion - gives power of int
 * @x: integer to power
 * @y: power to do
 * Return: integer value
 */
int _pow_recursion(int x, int y);
/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n);
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s);
/**
 * set_string -  sets a string
 * @s: string to set
 * @to: value to set to
 */
void set_string(char **s, char *to);
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size);
/**
 * _print_rev_recursion - prints in reverse recurse
 * @s: string to recurse
 */
void _print_rev_recursion(char *s);
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c);
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle);
/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8]);
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s);
#endif
