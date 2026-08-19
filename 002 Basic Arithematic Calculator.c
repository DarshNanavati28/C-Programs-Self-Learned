/* Basic Calculator */
/* Author Darsh Nanavati Date 31/03/2025 */
/*A basic C calculator program that accepts two floating-point numbers from the user and performs **addition, subtraction, multiplication, and division**. It 
demonstrates user input using `scanf()`, arithmetic operators, variables, and formatted output using `printf()`.*/
#include <stdio.h>
int main()
{
    printf("Welcome to the Calculator!!\n");  
	float a,b,c,d,e,f;
	printf("Enter the Value of a: ");
	scanf("%f",&a);
	printf("Enter the Value of b: ");
    scanf("%f",&b);
	c=a+b;
    printf("The Addition of a and b is: %f\n", c);
	d=b-a;
    printf("The Subtraction of b and a is: %f\n", d);
	e=a*b;
    printf("The Multiplication of a and b is: %f\n", e);
	f=b/a;
    printf("The Division of b and a is: %f\n", f);
	printf("Thank You for using the Calculator!!");	
}
