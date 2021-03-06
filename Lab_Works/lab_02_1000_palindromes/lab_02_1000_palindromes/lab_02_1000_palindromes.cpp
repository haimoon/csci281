//AUTHOR	:	Hai Nguyen
//DATE		:	Mar-14-2015
//NAME		:	lab_02_1000_palindromes.cpp
//GOAL		:	Store the 1000 palindromes into ARRAYS and use 2 FUNCTIONS get_reverse() and is_palindromes()
//PURPOSE	:	Know how to use ARRAY and FUNCTION

#include<stdio.h>

int is_palindrome(int n);
int get_reverse(int n);
int get_number_of_palindromes_between(int a, int b);



int main(void)
{
	int palindromes[1000];	//The number of Palindromes that we need to print out
	int count = 0;			//The number of Palindromes that we have gotten
	int i = 1;				//The number we start with
	int a;
	int b;

//	PART 1:	Print out the first 1000 Palindrome numbers

	while (count <= 999)
	{
		if (is_palindrome(i) == 1)
		{
			printf("\nThe Palindrome number %.4d is ", count + 1);
			printf("%d", i);
			count++;
			i++;
		}
		else
		{
			i++;
		}

	}

//PART 2:	Print out the NUMBER of prime number between (int a, int b). Example: from 1 to 1000 (108)
//			1 - 1,000,000; 1,000,000 - 2,000,000

	printf("\n The program will let you know how many Palindrome\n numers between 2 integers. Please enter 2 integers:	");
	scanf_s("%d %d", &a, &b);
	get_number_of_palindromes_between(a, b);
	printf("\n The number of Palindrome numbers between %d and %d is: %d", a, b, get_number_of_palindromes_between(a, b));

	getchar();getchar();
	return 0;
}

int is_palindrome(int i)
{
	if (i == get_reverse(i))
	{
		return 1;	//YES
	}
	else
	{
		return 0;	//NO
	}
}

int get_reverse(int i)
{
	int rev = 0;
	int digit;

	while (i != 0)
	{
		digit = i % 10;
		rev = rev * 10 + digit;
		i = i / 10;
	}
	return rev;
}

int get_number_of_palindromes_between(int a, int b)
{
	int i;
	int count = 0;

	for (i = a; i <= b; i++)
	{
		if (is_palindrome(i) == 1)
		{
			printf("%d\n", i);
			count = count + 1;
		}
	}
	return count;
}