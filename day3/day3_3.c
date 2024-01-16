// WAP to calculate area of a circle while taking radius as user input

#include <stdio.h>
#define PI 3.1415 // macros

int main() {
	float radius, area = 0;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	area = PI * radius * radius;
	printf("The area is %.2f\n", area);

	return 0;
}
