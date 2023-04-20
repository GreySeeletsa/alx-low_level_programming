#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: input 1
 * @b: input 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: input 1
 * @b: input 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: input 1
 * @b: input 2
 * Return: product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two number
 * @a: input 1
 * @b: input 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder from division
 * @a: input 1
 * @b: input 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
