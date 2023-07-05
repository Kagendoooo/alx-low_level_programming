#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int l, int i);
int is_palindrome(char *s);

/**
 *  _strlen_recursion - Return length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}

/**
  * check_palindrome - check if palindrome
  * @s: string to check
  * @l: length
  * @i: index of string
  * Return: 1 if palindrome, 0 if not
*/

int check_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
	{
		return (1);
	}
	if (s[i] == s[l - i - 1])
	{
		return (check_palindrome(s, l, i + 1));
	}
	return (0);
}

/**
  * is_palindrome - check if it is a palindrome
  *  @s: string to check
  * Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen_recursion(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, l, i));
}
