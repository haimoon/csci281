//AUTHOR	:	Hai Nguyen
//DATE		:	03-26(Thursday)-2015
//COURSE	:	CSCI 281 A
//GOAL		:	To complete Lab 11
//PURPOSE	:	To get a good understanding of MATH functions in C

#include<stdio.h>

#include<math.h>	//	Library for MATH functions

int main(void)
{
	int choice;	//	User needs to input 1 for degrees and 2 for radians
	double degrees;
	double radians;

//	Experiment 01: The program asks user to follow the instructions to return the value of Sine, Cosine, and Tangent

	printf("\n Please enter an angle either in DEGREES or RADIANS the program will tell you the result.");
	printf("\n Please enter 1 for DEGREES and 2 for RADIANS: ");
	scanf_s("%d", &choice);

	if (choice == 1)
	{
		printf("\n Please enter the DEGREES: ");
		scanf_s("%lf", &degrees);
	}
	else if (choice == 2)
	{
		printf("\n Please enter the RADIANS: ");
		scanf_s("%lf", &radians);
	}

	if (choice == 1)
	{
		radians = (3.1415 / 180) * degrees;
		
	}
	else if (choice == 2)
	{
		degrees == radians * 180 / 3.1415;
	}

	if (choice == 1)
	{
		printf("\n The sine of the angle you entered is: %lf", sin(radians));
		printf("\n The cosine of the angle you entered is: %lf", cos(radians));
		printf("\n The tangent of the angle you entered is: %lf", tan(radians));	//	Seem it gives the wrong answer for the tangent value
	}
	
	else if (choice == 2)	//  Something is wrong here when the program shows errors every time user chooses 2(RADIANS)
	{
		printf("\n The sine of the angle you entered is: %lf", sin(degrees));
		printf("\n The cosine of the angle you entered is: %lf", cos(degrees));
		printf("\n The tangent of the angle you entered is: %lf", tan(degrees));
	}
	

	getchar();getchar();
	return 0;
}
