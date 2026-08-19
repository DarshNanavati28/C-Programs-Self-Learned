/* Salary Increment or Decrement */
/* Author Darsh Nanavati Date 1/04/2025 */
/* A C program that takes a user's monthly salary as input and applies a salary increment or decrement based on a given condition. It demonstrates user input, 
integer variables, if-else conditional statements, comparison operators, and arithmetic operations in C.*/
#include <stdio.h>
int main ()
{
	printf("Hello!!\n");
	int salary;
	printf("Please Enter your Monthly Salary: Rs.");
	scanf("%d",&salary);
	if (salary>=5000)
	{
		printf("Congratulations. You will be incremented with a monthly salary of Rs.100/-.\n");
		printf("Your New salary will be: Rs.%d/-\n",salary+100);
	}
	else
	{
		printf("Sorry. You will be decremented with a monthly salary of Rs.50.\n");
		printf("Your New salary will be: Rs.%d/-\n",salary-50);
	}
	printf("Thank You!!");
}
