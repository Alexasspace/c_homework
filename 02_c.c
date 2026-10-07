/*2. Check whether a number is even or odd
Read an integer and print Even or Odd.
Example: 7 → Odd */

#include <stdio.h>

int main() {

int a = 0;

	printf("Enter the number\n");
	scanf("%d", &a);

	if(a % 2 == 0) {
	printf("Even\n");

	} else {
		printf("Odd\n");
	}
return 0;

}

