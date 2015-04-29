//AUTHOR:	Hai Nguyen
//COURSE:	CSCI 281 A
//DATE:		28(TUE) Apr 2015
//GOAL:		To finish lab 12
//PURPOSE:	Writing a C program that use Ternary Operator as long as If Else

#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	int hours;
	int bonus, bonuss; 
	float salary, salaryy;

	int max;
	int maxx;

	int min;
	int minn;

	//PART 1. DATA ENTRY

	printf("\n Please enter the first integer: ");
	scanf_s("%d", &a);

	printf("\n Please enter the second integer: ");
	scanf_s("%d", &b);

	printf("\n Please enter the third integer: ");
	scanf_s("%d", &c);

	printf("\n Please enter hours: ");
	scanf_s("%d", &hours);

	//PART 2. USING IF ELSE

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	if (a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}

	printf("\n PART 1 USING IF ELSE\n");

	printf("\n The largest integer between %d and %d is: %d", a, b, max);
	printf("\n The smallest integer between %d and %d is: %d", a, b, min);

	if (a > b)
	{
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}

	printf("\n The largest integer between %d, %d and %d is %d", a, b, c, max);
	printf("\n The smallest integer between %d, %d and %d is %d", a, b, c, min);

	if (hours > 30)
	{
		bonus = 100;
	}
	else
	{
		bonus = 20;
	}

	if (hours > 30)
	{
		salary = 100 + 15.10 * hours;
	}
	else
	{
		salary = 50 + 12.10 * hours;
	}

	printf("\n The worker's bonus is %d", bonus);
	printf("\n The worker's salary is %.2f", salary);

	printf("\n\n PART 2 USING TERNARY OPERATOR\n");
	
	//PART 3. USING TERNARY OPERATOR

	maxx = (a > b)? a : b;
	minn = (a < b)? a : b;
	
	printf("\n\n Problem 1 \n");
	
	printf("\n The biggest integer between %d and %d is: %d", a, b, maxx);

	printf("\n\n Problem 2 \n");

	printf("\n The smallest integer between %d and %d is %d", a, b, minn);

	maxx = (a > b)? ((a > c)? a : c) : ((b > c)? b : c);
	minn = (a < b)? ((a < c)? a : c) : ((b < c)? b : c);
	
	printf("\n\n Problem 3 \n");

	printf("\n The largest integer between %d, %d and %d is %d", a, b, c, maxx);
	
	printf("\n\n Problem 4 \n");
	
	printf("\n The smallest integer between %d, %d and %d is %d", a, b, c, minn);

	bonuss = (hours > 30)? 100 : 20;

	printf("\n\n Problem 5 \n");

	printf("\n The worker's bonus is $%d", bonuss);

	salaryy = (hours > 30)? (100 + 15.10 * hours) : (50 + 12.10 * hours);

	printf("\n\n Problem 6 \n");

	printf("\n The worker's salary is $%.2f", salaryy);

	getchar();getchar();
	return 0;
}
