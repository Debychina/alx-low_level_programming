#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charachter to print
 * Return: on sucess 1.
 * On errot, -1 is returned, and errno is set appropraitely.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
