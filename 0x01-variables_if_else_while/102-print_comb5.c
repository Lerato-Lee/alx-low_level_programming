#include <stdio.h>
/**
 * main - print possible combination of two digit numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
	int i, p;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; j++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


putchar('\n');
return (0);
}
