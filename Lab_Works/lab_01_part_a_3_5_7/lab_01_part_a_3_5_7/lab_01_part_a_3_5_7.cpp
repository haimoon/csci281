//AUTHOR	:	Hai Nguyen
//DATE		:	02(Nov)-02(Mon)-2015
//COURSE	:	CSCI 281 Section A
//FILE		:	lab_01_part_a_3_5_7
//GOAL		:	To complete Lab 1, writing loop to print the first 100 integers
//				that are multiples of 3 and 7, but not 5
//PURPOSE	:	To learn how to use WHILE loop

#include<stdio.h>

int main(void)
{
	int i = 1;		//	This is the multiple of 3 and 7, but not 5. Starting from 1.
	int count = 1;	//	This is the number that will count from 1 to 100

	while (count <= 100)
	{
		if (i % 3 == 0 && i % 7 == 0 && i % 5 != 0)
		{
			printf("\nThe %.3d number is ", count);	//	.3 between %d to set the 3 digits to the right of "."
			printf("%d\n", i);
			count++;
		}
		i++;
	}

	getchar();
	return 0;
}
