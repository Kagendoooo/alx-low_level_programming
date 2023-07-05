#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *Return: sqrt or -1
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - return natural sqrt of number
 * @n: number to return sqrt
 * Return: sqrt or -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
