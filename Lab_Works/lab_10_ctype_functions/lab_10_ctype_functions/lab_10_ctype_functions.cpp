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

//	Experiment 03: Print out the ASCII codes of every digit
	printf("\n Experiment 03 \n");
	for (i = 0; i <= 127; i++)
	{
		if (isdigit(i))
		{
			printf("\n %d - %c", i, i);
		}
	}

//	Experiment 04: Print out the ASCII codes of every letter/digit
	printf("\n Experiment 04: Print out the ASCII codes of every letter/digit \n");
	for (i = 0; i <= 127; i++)
	{
		if (isalnum(i))
		{
			printf("\n %d - %c", i, i);
		}
	}

//	Experiment 05: Input a letter, and print its uppercase version

	//	Method 01: This does NOT work as it supposes to work. So far using Method 02

	
	printf("\n Experiment 05: Input a letter, and print its uppercase version \n");
/*
	char my_char_variable;
	printf("\n Please enter a character variable, and I will convert it to uppercase, if necessary: ");
	scanf_s("%c", &my_char_variable);
	printf("\n The variable, in uppercase form, is %c", toupper(my_char_variable)); // Need to fix //
*/

	//	Method 02:
	for (i = 0; i <= 127; i++)
	{
		if(islower(i))
		{
			printf("\n LOWER %d %c\t UPPER %d %c", i, i, toupper(i), toupper(i));
		}
	}

	//	Method 03: Try to use any thing to make it works as it supposes to work.
	char my_char;
	printf("\n Please enter a character variable, and I will convert it to uppercase, if necessary: ");

	char my_char_test = 'y';	//	This declaration use to test whether the toupper works or NOT
	scanf_s("           %c", &my_char);

	printf("\n The variable, %c in uppercase form, is %c", my_char, toupper(my_char));
	printf("\n The variable, in uppercase form, is %c", toupper(my_char_test));	//	And it works.
	
	getchar();getchar();getchar();

//	Experiment 06: Print all the lowercase letters
	printf("\n Experiment 06: Print all the lowercase letters \n");
	for (i = 0; i <= 127; i++)
	{
		if(islower(i))
		{
			printf("\n %d %c", i, i);
		}
	}

//	Experiment 07: Print all the uppercase letters
	printf("\n Experiment 07: Print all the uppercase letters \n");
	for (i = 0; i <= 127; i++)
	{
		if(isupper(i))
		{
			printf("\n %d %c", i, i);
		}
	}

//	Experiment 08: Print all alphanumeric characters
	printf("\n Experiment 08: Print all alphanumeric characters \n");
	for (i = 0; i <= 127;  i++)
	{
		if(isalnum(i))
		{
			printf("\n %d %c", i, i);
		}
	}

//	Experiment 09: Print all whitespace characters
	printf("\n Experiment 09: Print all whitespace characters \n");
	for (i = 0; i <= 127; i++)
	{
		if(isspace(i))
		{
			printf("\n %d %c", i, i);
		}
	}

//	Experiment 10: Print all punctuation characters
	printf("\n Experiment 10: Print all punctuation characters \n");
	for (i = 0; i <= 127; i++)
	{
		if(ispunct(i))
		{
			printf("\n %d %c", i, i);
		}
	}

//	Experiment 11: Print all printale characters
	printf("\n Experiment 11: Print all printable characters \n");
	for (i = 0; i <= 127; i++)
	{
		if(isprint(i))
		{
			printf("\n %d %c", i, i);
		}
	}


	getchar();getchar();
	return 0;
}