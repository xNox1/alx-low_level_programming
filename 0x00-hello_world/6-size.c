#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("The size of a char : %i byte(s)\n", sizeof(char));
	printf("The size of a int : %i byte(s)\n", sizeof(int));
	printf("The size of a long int : %i byte(s)\n", sizeof(long int));
	printf("The size of a long long int : %i byte(s)\n", sizeof(long long int));
	printf("The size of a float : %i byte(s)\n", sizeof(float));
	return (0);
}
