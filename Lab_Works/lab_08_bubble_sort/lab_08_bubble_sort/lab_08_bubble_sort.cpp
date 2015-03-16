//NAME	:	Hai Nguyen
//DATE	:	Mar-12-2015
//COURSE:	CSCCI 281 A
//FILE	:	lab_08_bubble_sort.cpp
//GOAL	:	To complete Lab 8, sorting the number


#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	int array[100];
	int temp;

	printf("Please enter number of elements: ");
	scanf_s("%d", &n);
	printf("Please enter %d integer: ", n);

//	Data entry
	for (i = 0; i <= n - 1; i++)
	{
		scanf_s("%d", &array[i]);
	}

//	Bubble sorting the integers
	for (i = 0; i <= n - 2; i++)
	{
		for (j = 0; j <= n - i - 2; j++)
		{
			if (array[j] > array[j + 1])	// In order to print in decreasing order change to " < "
			{
				temp = array[j];			// SWAP array[j] with array[j + 1]
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

//	Printing the integers in ascending order.
	printf("List integers in ascending orfer");
	for (i = 0; i <= n - 1; i++)
	{
		printf("\n%d", array[i]);
	}


	getchar();getchar();
	return 0;
}

