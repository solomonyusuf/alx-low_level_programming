#include <unistd.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
