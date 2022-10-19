#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char st[] = "_putchar\n";
int i = 0;

while (st[i] != '\0')
	{
	char c = st[i];

	_putchar(c);
	i++;
	}
return (0);
}
