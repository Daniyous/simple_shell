#include "main.h"
#include <stdio.h>
/**
 * main - this the main function of the code
 * @sum - gives the sum of two numbers
 * Return: 1 if it is correct
 *              -1 error
 **/

int main(void)
{
	int num1, num2, res;

	printf("\nEnter the two numbers : ");
	scanf("%d %d", &num1, &num2);
	/*Call Function Sum With Two Parameters*/
	res = sum(num1, num2);
	printf("nAddition of two number is : ");
	return (0);
}

int sum(int num1, int num2)
{
	int num3;

	num3 = num1 + num2;
	return (num3);
}
