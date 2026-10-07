/*4. Find the last digit of a number
Read a positive integer and print its last digit.
Example: 1234 → 4*/


#include <stdio.h>

int main() {

	int a = 0;
	
	printf("Enter the number\n");

	scanf("%d", &a);

	printf("%d\n", a % 10);
	
	return 0;
}

