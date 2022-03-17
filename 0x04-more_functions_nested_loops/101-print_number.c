#include "main.h"


/**
 * print_number - prints a number to the screen
 * @n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{

if (n < 0)
{
_putchar('-');
print_unsigned_int(-(unsigned int)n);
}
else
print_unsigned_int(n);
}

/**
* print_unsigned_int - print an unsigned integer
* @n: given unsigned integer
*
* Return: nothing
*/
void print_unsigned_int(unsigned int n)
{
if (n / 10)
print_unsigned_int(n / 10);
_putchar((n % 10) + '0');
}

