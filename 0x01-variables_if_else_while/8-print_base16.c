#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{int num = 0;
	char ch = 'a';

	while (num >= 9)
	{
		putchar('0' + num);
		num++;
	}
	while (ch >= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
