#include <stdio.h>

int main(void)
{
	int i;
	long int I;
	long long int II;
	float d;
	char c;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(I));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(II);
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
        return (0);
}	
