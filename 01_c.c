/*1. Swap two numbers
Read two integers and swap their values using a temporary variable. Print the values after swapping.
Example: 4 9 → 9 4 */

#include <stdio.h>

int main() {
	int a, b, temp;
	
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d\n", a, b);

	return 0;
}
