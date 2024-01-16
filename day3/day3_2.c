// WAP to find the Fahrenheit for a given centigrade temperature

#include <stdio.h>

int main() {
	int celsius, result = 0;
	printf("Enter the temperature in Centigrade: ");
	scanf("%d", &celsius);

	result = (celsius * 9 / 5) + 32;
	printf("The Fahrenheit temperature is %d\n", result);

	return 0;
}
