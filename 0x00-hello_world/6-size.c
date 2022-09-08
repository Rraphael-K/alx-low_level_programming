#include <stdio.h>
/**
 * main - Entry poin
 *
 * Description: Determine the size of a data type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declaring data types */

	char ch;
	int num;
	long numL;
	long long LnumL;
	float fnum;

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(numL));
	print("Size of a long long int: %ld byte(s)\n", sizeof(LnumL);
	printf("Size of a float: %ld byte(s)\n", sizeof(fnum));
}
