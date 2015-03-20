//AUTHOR	:	Hai Nguyen
//DATE		:	03(Mar)-19-(Thurs)-2015
//COURSE	:	CSCI 281 A
//FILE		:	lab_10_ctype_functions.cpp
//GOAL		:	To complete lab 10, learning to a variety of character type functions
//				Use ctype.h and ASCII(American Standard Code for Information Interchange)

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int i;	//	Declare i to use in FOR loop
	char c;	//	Declare 'c' as character to print out

//	Experiment 01: Print out the ASCII codes of every uppercase letter
	printf("\n Experiment 01 \n");
	for (i = 65; i <= 90; i++)
	{
		printf("\n %d - %c", i, i);
	}

//	Experiment 02: Print out he letter and ASCII codes for every lowercase letter
	char ch;	// Declare 'ch' as charactoer to print out

	printf("\n Experiment 02 \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("\n %c _ %c", ch, ch);
	}

// Experiment 03: Print out the ASCII codes of every digit
	printf("\n Experiment 03 \n");
	for (i = 0; i <= 127; i++)
	{
		if (isdigit(i))
		{
			printf("\n %d - %c", i, i);
		}
	}

// Experiment 04: Print out the ASCII codes of every letter/digit
	printf("\n Experiment 04: Print out the ASCII codes of every letter/digit \n");
	for (i = 0; i <= 127; i++)
	{
		if (isalnum(i))
		{
			printf("\n %d - %c", i, i);
		}
	}

// Experiment 05: Input a letter, and print its uppercase version
	printf("\n Experiment 05: Input a letter, and print its uppercase version \n");
	char my_char_variable;
	printf("\n Please enter a character variable, and I will convert it to uppercase, if necessary: ");
	scanf_s("%c", &my_char_variable);
//	printf("\n The variable, in uppercase form, is %c", toupper(my_char_variable)); // Need to fix //

	getchar();getchar();
	return 0;
}