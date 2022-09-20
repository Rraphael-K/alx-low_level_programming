#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * passwrd - creates a unique passwrd acording the the
 * users required password length
 * @passwrd_len: Captures users input
 *
 * Return: Nothing
 */
void passwrd(int passwrd_len)
{
	/* unique charactors */
	char list[] = "0123456789!@#$%^&*()_+,./;'\][<>?:\"}|{abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count;

	/* create a new line above the passwrd generated keygen style */
	for (count = 0; count < passwrd_len; count++)
		putchar('*');

	/* new line and tab */
	printf("\n\t");
	/* time changes at each new run of the program */
	srand(time(NULL));

	/* generating and printing the passord using the list */
	for (count = 0; count < passwrd_len; count++)
		printf("%c", list[rand() % (sizeof list - 1)]);

	putchar('\n');
}



/**
 * main - Entry point
 * Description: Create a random password for every user
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int passwrd_len;

	printf("\t####################\n\n");
	printf("The Passwrd Generator\n\n");
	printf("\t####################\n\n");

	/* User choise for password length */
	printf("Enter thelength of your passwrd: ");
	scanf("%d", &passwrd_len);

	printf("\n\n");
	/* display password using function */
	passwrd(passwrd_len);

	return (0);
}
