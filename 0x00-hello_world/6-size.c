#include <stdio.h>
/**
 *main-is the entry point for the
 *program.
 *
 *Return:zero if no error, Non-ze
 *ro value if errors.
 */
int main(void)
{
	printf("Size of a
char: %ld byte(s)\n", sizeof
(char));
	printf("Size of an int
byte(s)\n", sizeof(int));
	printf("Size of a long
int: %ld byte(s)\n", sizeof(long
int));
	printf("Size of a long lon
g int: %ld byte(s)\n", sizeof(long
long int));
	printf("Size of a float: %
ld byte(s)\n", sizeof(float));
	return (0);
}
