//GOAL	:	Learn how to use functions from the basic things
//			Declaring an average FUNCTION that reads three numbers
//			and computes their averages, one pair at a time.

#include<stdio.h>

double average(double a, double b)
{
	return (a + b) / 2;
}


int main(void)
{
	double x = 3.5, y = 9.6, z = 10.2;

//	scanf_s("%lf %lf %lf", &x, &y, &z);	//Input x = 3.5, y = 9.6, z = 10.2
	printf("\n Average of %g and %3g: %g", x, y, average(x, y));	//The result is 6.55
	printf("\n Average of %g and %g: %g", y, z, average(y, z));		//The result is 9.9
	printf("\n Average of %g and %g: %g", x, z, average(x, z));		//The result is 6.85

	getchar();getchar();
	return 0;
}
