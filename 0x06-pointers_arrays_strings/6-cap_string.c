#include "main.h"
/**
 * cap_string = Convert to Uppercase
 * @s: String Input
 * Return: S
 */
char *cap_string(char *s)
{
	/* counter */
	int count = 0;
	
	 while (s[count])
	 {
		 if (count == 0 && (s[count] >= 'a' && s[count] <= 'z'))
				 s[count] -= 32;
		 if (check(s[i]) && (s[count + 1] >= 'a' && s[count + 1] <= 'z'))
			 s[count + a] -= 32;
		 count++;
	 }
	 return (s);
}
