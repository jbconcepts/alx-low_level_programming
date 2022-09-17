#include <stdio.h>
#include "main.h"

/**
 * Print_numbers - functions that print all numbers from
 * 0-9
 *
 * return: returns nothing
 */

void print_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
