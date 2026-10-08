/*Sum numbers from 1 to N
Read a positive integer N. Use a loop to calculate and print the sum of all integers from 1 to N.
Example: N = 5 → 15*/

#include <stdio.h>
int main() {

int i;
int N =0;
int sum = 0;

	printf("Enter the number\n");
	scanf("%d", &N);

	for(i = 1; i <= N; i++) {
	sum = sum + i;
	}

	printf("%d\n", sum);
	
return 0;

}
