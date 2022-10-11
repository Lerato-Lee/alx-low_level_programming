#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for alx students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Zeus", 3.5, "Lee");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
