// WAP to convert given paisa into its equivalent rupee and paisa

#include <stdio.h>

int main() {
	int paisa, rupee, amount;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	printf("paisa\n");

	rupee = amount / 100;
	paisa = amount % 100;

	printf("%d paisa = %d Rupee and %d paisa\n", amount, rupee, paisa);

	return 0;
}
