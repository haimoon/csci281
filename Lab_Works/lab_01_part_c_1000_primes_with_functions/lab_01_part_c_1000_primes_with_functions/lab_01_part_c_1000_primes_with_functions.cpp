//AUTHOR	:	Hai Nguyen
//DATE		:	02(Nov)-02(Mon)-2015
//COURSE	:	CSCI 281 Section A
//FILE		:	lab_01_part_c_1000_primes_with_functions
//GOAL		:	To complete Lab 1, using While loop to write a program to find first 1,000 prime numbers
//PURPOSE	:	To learn to write a program to print the first 1,000 prime numbers WITH a function is_prime(int n)

#include<stdio.h>

int is_prime(int n);

int main(void)
{
	int count = 1;
	int n = 1;

	while (count <= 1000)
	{
		if (is_prime(n) == 1)
		{
			printf("\n %d", n);
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

int is_prime(int n)
{
	int i;
	int number_of_factors = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			number_of_factors++;
		}
	}
	if (number_of_factors == 2)
	{
		return 1; //PRIME number
	}
	else
	{
		return 0; //COMPOSITE number
	}
}


