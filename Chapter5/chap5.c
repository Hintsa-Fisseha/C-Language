// Programming projects
/* 1. Write a program that calculates how many digits a number contains:
	  Enter a number: 374
	  The number 374 has 3 digits

	  You may assume that the number has no more than four digits. Hint: Use if statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.
*/
void digits (int num);
#include <stdio.h>

int main (void){
	int num_test;
	scanf("%d", &num_test);
	digits(num_test);
return 0;
}

void digits (int num){

	if (num >= 0 && num <= 9)
		printf("The number %d has 1 digit\n",num);
	if (num >= 10 && num <= 99)
		printf("The number %d has 2 digits\n",num);
	if (num >= 100 && num <= 999)
		printf("The number %d has 3 digits\n",num);
	return;
}
