#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 * * main function 
 *
 * * this is the main function
 *
 * * this program prints "Programming is positive, zero or negative 
 *
 * *  it will return nothing 
 *
 * */

int main(void)

{

	int number;



	srand(time(0));

	number = rand() - RAND_MAX / 2;	

	if (number > 0)

	{

			printf("%i is positive\n", number);

	}

	else if (number == 0) {

			printf("%i is zero\n", number);

	}

	else if (number < 0)

	{

			printf("%i is negative\n", number);

	}

		return (0);

}
