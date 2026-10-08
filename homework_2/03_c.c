/*3. Print even numbers
Read a positive integer N. Print all even numbers from 1 to N, including N if it is even.
Example: N = 10 → 2 4 6 8 10*/

#include <stdio.h>
int main() {

int i;
int N = 0;

	printf("Enter even nuber\n");
	scanf("%d", &N);

	for(i = 1; i <= N; i++) {
		if(i % 2 == 0){
		printf("%d\n", i);
	}
		}
return 0;
}
