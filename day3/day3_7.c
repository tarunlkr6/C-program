/* WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user. 
 */

#include <stdio.h>

int main() {
	int mark1, mark2, mark3, mark4, mark5, sum = 0, avg = 0, percent = 0;
	printf("Enter the number of 1st subject: ");
	scanf("%d", &mark1);
	printf("Enter the number of 2nd subject: ");
	scanf("%d", &mark2);
	printf("Enter the number of 3rd subject: ");
	scanf("%d", &mark3);
	printf("Enter the number of 4th subject: ");
	scanf("%d", &mark4);
	printf("Enter the number of 5th subject: ");
	scanf("%d", &mark5);
	
	sum = mark1 + mark2 + mark3 + mark4 + mark5;
	percent = sum / 10;
	avg = sum / 5;
	printf("The average is: %d\n", avg);
	printf("The percentage is: %d% \n", percent);
	
	return 0;
}
