
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_putchar(void)
{
	char stuff[8] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(stuff[x]);
	}
}
