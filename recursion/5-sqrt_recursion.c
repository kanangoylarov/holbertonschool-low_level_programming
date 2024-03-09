#include "main.h"
int _sqrt_recursion(int n);
int _check(int a, int root);
/*
 * _sqrt_recursion - is runnig program
 * @n: is variable
 */
int _sqrt_recursion(int n)
{
	int root = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_check(n, root));
}
/*
 * _check - is running
 * @a: is variable
 */
int _check(int a, int root)
{
	if (root * root == a)
		return (root);
	else if (root == a / 2)
		return (-1);
	return (_check(a, root + 1));
}
