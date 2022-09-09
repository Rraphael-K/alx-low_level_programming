#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: The alphabet in lowercases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare the character to store the alphabet */
	char alphaL;
	char alphaC;

	/*
	 * Display all the letters of the alphabet
	 * do this while until z
	 */
	for (alphaL = 'a'; alphaL <= 'z'; alphaL++)
	       putchar(alphaL);
	for (alphaC = 'A'; alphaC <= 'Z'; alphaC++)
		putchar(alphaC);
		putchar('\n');	

	return (0);
}
