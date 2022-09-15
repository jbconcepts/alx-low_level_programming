#include <stdio.h>
/**
 * This is the header
 *
 */

//This is the main function
int main(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
