#include <stdlib.h>
#include <stdio.h>
/**
 *main - returns alphabets both lower and upper cases
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		if ((alp != 'e') && (alp != 'q'))
		{	putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}

