#include "main.h"

/**
 * _isalpha - checks for char aalphabet
 * @c: the char to be checked
 *
 * Return: 1 if char is letter lower or uppe, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
