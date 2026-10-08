/*1. Print numbers from 1 to N
Read a positive integer N. Use a loop to print every number from 1 to N.
Example: N = 5 → 1 2 3 4 5*/

#include <stdio.h>
int main() {

	int i;
	int N = 0;

	printf("Enter the number\n");
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
	printf("%d\n", i);
	}

return 0;
}
