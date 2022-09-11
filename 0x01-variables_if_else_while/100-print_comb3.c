#include<stdio.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: Always (Success);
 */
int main(void)

{
	int i, j;

	for (i = 0; i <= 9; i++)

	{

		for (j = 1; j <= 9; j++)

		{

			putchar(i + '0');

			putchar(j + '0');

			if (i != 8)

			{

				putchar(',');

				putchar('');
			}

		}

	}

	putchar('\n');

	return(0);

}
