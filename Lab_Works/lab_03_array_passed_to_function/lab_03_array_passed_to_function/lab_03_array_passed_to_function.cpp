//AUTHOR	:	Hai Nguyen
//DATE		:	Mar-14-2015
//COURSE	:	CSCI 281 A
//NAME		:	lab_02_1000_palindromes.cpp
//GOAL		:	Write a function in C that accepts an array of integers as input and returns
//				the average, largest, smallest of the values in the array
//PURPOSE	:	Know how to use ARRAY and FUNCTION


#include<stdio.h>

float get_average_value_in_array(int a[], int n);
int get_largest_value_in_array(int a[], int n);
int get_smallest_value_in_array(int a[], int n);

int main(void)
{
	int my_array[10] = {48, 59, 93, 87, 39, 95, 74, 66, 54, 98};
	float mean;	//Mean is the average of the array
	int max;	//Max is the largest of the array
	int min;	//Min is the smallest of the array

	mean = get_average_value_in_array(my_array, 10);
	printf("\n The average value in the array is %f", mean);

	max = get_largest_value_in_array(my_array, 10);
	printf("\n The largest value in the array is %d", max);

	min = get_smallest_value_in_array(my_array, 10);
	printf("\n The smallest value in array is %d", min);

	getchar();
	return 0;
}

float get_average_value_in_array(int a[], int n)
{
	int total = 0;
	float avg;
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		total = total + a[i];
	}
	avg = total / (float)n;
	return avg;
}

int get_largest_value_in_array(int a[], int n)
{
	int max = a[0];
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
		}
	}
	return max;
}

int get_smallest_value_in_array(int a[], int n)
{
	int min = a[0];
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
		}
	}
	return min;
}
