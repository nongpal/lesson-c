#include <stdio.h>

int custom_strlen(char *s) {
	/*
	 * This function for calculate length of the string, while it
	 * can be done with 'strlen(...)' from 'string.h' module, but
	 * this is just for grasp the strlen() works.
	 *
	 * Basically, string is ended with '\0' char.
	 */
	int count = 0;

	while (s[count] != '\0') {
		count++;
	}
	return count;
}

int main(void) {
	/*
	 * String is a sequence of characters,
	 * it declared within a double quotes -> `"..."`
	 */

	char a[] = "Nongpal"; // string variables as Array
	char *b = "Chester"; // string variables as pointer
	
	printf("%s %s\n", a, b);

	printf("The string \"%s\" have length %d bytes\n", b, custom_strlen(b));
}
