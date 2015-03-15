//AUTHOR	:	Hai Nguyen
//DATE		:	Mar-14-2015
//GOAL		:	Type any 20 integers and find the largest and the smallest elements
//PURPOSE	:	Know how to use ARRAY and FUNCTION

#include<stdio.h>

int main(void)
{
	int a[20];
	int i;
	int max = 0;
	int min = 0;

	for (i = 0; i <= 19; i++)	// Input any 20 integers
	{
		printf("\n Please enter the value for a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	
	
	//Find the largest element
	
	max = a[0];
	
	for (i = 0; i <= 19; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
		}
	}


	//Find the smallest element
	
	min = a[0];

	for (i = 0; i <= 19; i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
		}
	}

	printf("\n The largest element is %d", max);
	printf("\n The smallest element is %d", min);

	getchar();getchar();
	return 0;
}

