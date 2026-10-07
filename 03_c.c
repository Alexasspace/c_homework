/*3. Check whether a number is divisible by both 3 and 5
Read an integer and print Yes if it is divisible by both, otherwise print No.
Example: 30 → Yes */

#include <stdio.h>

int main() {

int a = 0;

	printf("Enter the number\n");	
	scanf("%d", &a);
	if(a % 3 == 0 && a % 5 == 0) {
	printf("Yes\n");
	
	} else {
	printf("No\n");
}
return 0;
}
