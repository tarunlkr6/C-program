// WAP to perform the addition of the two integers and display the result. Input must be given by the user.

#include <stdio.h>

int main() {
	int num1, num2, result = 0;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	result = num1 + num2;
	printf("Sum is %d\n", result);

	return 0;
}
