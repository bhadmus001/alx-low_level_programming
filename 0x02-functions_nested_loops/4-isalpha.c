#include "main.h"
/**
 *  _isalpha - detect if a input is a letter
 *  @c: character check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return (c >= 97 && c <= 122 || c >= 65 && c <= 90);
}
