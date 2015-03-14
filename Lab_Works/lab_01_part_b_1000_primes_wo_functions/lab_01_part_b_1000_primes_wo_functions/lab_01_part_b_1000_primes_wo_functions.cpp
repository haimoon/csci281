//AUTHOR	:	Hai Nguyen
//DATE		:	02(Nov)-02(Mon)-2015
//COURSE	:	CSCI 281 Section A
//FILE		:	lab_01_part_b_1000_primes_wo_functions
//GOAL		:	To complete Lab 1, using While loop to write a program to find first 1,000 prime numbers
//PURPOSE	:	To learn to write a program to print the first 1,000 prime numbers WITHOUT a function

#include<stdio.h>

//Part 3: Print the first 1000 Prime numbers WITHOUT FUNCTIONS

int main(void)
{
	int i;
	int n = 1;
	int count = 1;
	int number_of_factors;

	while (count <= 1000)	// Program will stop if COUNT reach 1000 times. It means after printing 1000 PRIME numbers
	{
		number_of_factors = 0;
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				number_of_factors++;
			}
		}

		if (number_of_factors == 2)
		{
			printf("\n%d", n);
			count++;
			n++;
		}
		else
		{
			n++;
		}
	}

	getchar();
	return 0;
}



// Part 1: Print the first 1000 numbers-------------------

/*
int main(void)
{
	int i = 1;
	while (i <= 1000)
	{
		printf("\n The number %d", i);
		i = i + 1;
	}

	getchar();
	return 0;
}
*/


//Part 2: Find Prime number-------------------------------

/*
int main(void)
{
	int i;
	int n;
	int number_of_factors = 0;

	printf("\n Please enter any integer: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			number_of_factors++;
		}
		
	}

	if (number_of_factors == 2)
	{
		printf("\nPRIME number");
	}
	else
	{
		printf("\nCOMPOSITE number");
	}
	
	getchar();getchar();
	return 0;
}
*/