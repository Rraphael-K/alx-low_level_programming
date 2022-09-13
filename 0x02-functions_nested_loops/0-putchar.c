#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* call the string vatiable define in the header */
	int count, lengthOfString = strlen(string);

	/*
	 * use putchar to display the string
	 * must loop inorder to save each charater in the putchar function
	 */
	for (count = 0; count <= lengthOfString; count++)
		putchar(string[count]);

	return (0);
}
