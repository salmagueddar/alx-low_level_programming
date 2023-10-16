#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * strlen - returns the length of a string
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != "\0")
		{
			longi++;
			s++;
		}
	return (longi);
}
