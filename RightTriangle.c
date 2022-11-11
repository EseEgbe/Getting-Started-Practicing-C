#include <stdio.h>
#include <math.h>

/**
 * main - Entry point.
 * 
 * Description: Program that calculates the hypotenus
 *				of a right triangle.
 * 
 * Return: Always 0 (Success).
*/

int main(void)
{
	double a;
	double b;

	printf("This app will calculate the hypotenus of a right triangle.\n");

	// Get the first length of triangle
	printf("enter length 'a' of triangle: ");
	scanf("%lf", &a);

	// Get the second length of triangle
	printf("enter length 'b' of triangle: ");
	scanf("%lf", &b);

	//Calculate the hypotenus
	double c = sqrt((a * a) + (b * b));
	printf("The hypotenus is %f\n", c);

	return (0);
}