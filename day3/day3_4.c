// WAP to calculate area of a triangle who's base and height are user input

#include <stdio.h>

int main() {
	int base, height, area = 0;
	printf("Enter the height of the triangle: ");
	scanf("%d", &height);
	printf("Enter the base of the triangle: ");
	scanf("%d", &base);

	area = base * height * 0.5;
	printf("The area of the triangle is: %d\n", area);

	return 0;
}
