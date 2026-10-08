/*5. Sum until zero
Keep reading integers until the user enters 0. Then print the sum of all entered numbers.
Example: 4 7 -2 0 → 9*/

#include <stdio.h>
int main() {

	int number;
	int sum = 0;
	printf("Enter the number\n");
	scanf("%d", &number);

	while(number != 0){
	sum = sum + number;
	scanf("%d", &number);
	}
	
	printf("%d\n", sum);

return 0;
}
