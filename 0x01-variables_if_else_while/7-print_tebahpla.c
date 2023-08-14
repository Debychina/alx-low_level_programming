#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

		return (0);
}
