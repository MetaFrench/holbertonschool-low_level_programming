#include<stdio.h>
int main() 
{
	/*/ sizeof evaluates the size of a variable */
	printf("Size of char: %ld bytes/n", sizeof(char));
	printf("Size of int: %ld bytes/n", sizeof(int));
	printf("Size of long int: %ld bytes/n", sizeof(long));
	printf("Size of long long int: %ld bytes/n", sizeof(long long));
	printf("Size of float: %ld bytes/n", sizeof(float));
	return (0);
}
