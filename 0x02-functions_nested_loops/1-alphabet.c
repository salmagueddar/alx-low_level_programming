#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
