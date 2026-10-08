/*4. Multiplication table
Read an integer. Use a loop to print its multiplication table from 1 to 10, one result per line.
Example for 3:
3 * 1 = 3
3 * 2 = 6
...
3 * 10 = 30*/

#include <stdio.h>
int main() {

int i;
int N = 0;

	printf("Enter the number\n");
	scanf("%d", &N);

	for(i = 1; i <= 10; i++) {
	printf("%d * %d = %d\n", N, i, N * i);
	}

return 0;
}
