#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints all single digit numbers
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++);
	putchar(i);
	putchar('\n');

	return (0);
}
