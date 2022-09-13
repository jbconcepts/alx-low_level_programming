#include <stdio.h>



/**

* main function 

* Description: this is the main function

* this program prints Programming is like building a multilingual puzzle using printf

* return 0 

*/

int main(void)

{

	char ch;

	int in;

	long longi;

	long long llongi;

	float fl;

	

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));

	printf("Size of an int: %ld byte(s)\n", sizeof(in)); 

	printf("Size of a long int: %ld byte(s)\n", sizeof(longi)); 

	printf("Size of a long long int: %ld byte(s)\n", sizeof(llongi));

	printf("Size of a float: %ld byte(s)\n", sizeof(fl));

	return (0);

}
