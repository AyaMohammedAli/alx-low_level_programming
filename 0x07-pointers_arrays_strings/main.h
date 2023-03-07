#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
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
#endif
