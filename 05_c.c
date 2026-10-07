/*5. Calculate the sum of the digits of a three-digit number
Read a positive three-digit integer and print the sum of its digits.
Example: 352 → 10*/

#include <stdio.h>

int main() {

	int a = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int sum;

	printf("Please enter the three-digit number\n");

	scanf("%d", &a);
	
	x = a / 100;
	y = (a / 10) % 10;
	z = a % 10;
	sum = x + y + z;

	printf("%d\n", sum);

	return 0;

}





