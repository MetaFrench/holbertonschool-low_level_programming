#include "main.h"
/**
 * _isalpha - Checks for alphabetic letter
 * @c: Character to check
 *
 * Return: 1 if letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
