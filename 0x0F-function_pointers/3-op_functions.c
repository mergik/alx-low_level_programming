#include "3-calc.h"

/**
  * op_add - returns the sum of a and b
  * @a: the first integer
  * @b: the second integer
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
