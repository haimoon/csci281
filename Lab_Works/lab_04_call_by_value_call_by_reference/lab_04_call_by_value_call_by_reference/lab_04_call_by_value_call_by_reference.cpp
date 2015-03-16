//AUTHOR	:	Hai Nguyen
//DATE		:	Feb-19-2015
//COURSE	:	CSCI 281 A
//FILE		:	lab_04_call_by_value_call_by_reference.cpp
//GOAL		:	To understand the difference between Call by Value and Call by Reference
//				and to see how ordinary values and array variables are passed to functions.
//PURPOSE	:	Using Array, Loop, Function


#include<stdio.h>
//	Part 1 Function Call
void magnify_three_values(int x, int y, int z, int magnify_factor);
//	Part 2 Function Call
void print_array_values(int a[], int n);
void magnify_array_values(int a[], int n,int magnify_factor);

int main(void)
{
	int x = 10;
	int y = 20;
	int z = 30;

	int my_array[5] = {1000, 2000, 3000, 4000, 5000};
	
	int factor = 2;

	printf("\n Before magnification: x = %d, y = %d, z = %d", x, y, z);
	magnify_three_values(x, y, z, factor);
	printf("\n After magnification: x = %d, y = %d, z = %d", x, y, z);

	getchar();

//	Part 2 of the Lab 4

	printf("\n Before....changing array value....\n");
	print_array_values(my_array, 5);

	magnify_array_values(my_array, 5, factor);
	
	printf("\n After....changing array value....\n");
	print_array_values(my_array, 5);

	getchar();getchar();
	return 0;
}

void magnify_three_values(int a, int b, int c, int magnify_factor)
{
	a = a * magnify_factor;
	b = b * magnify_factor;
	c = c * magnify_factor;
}

void print_array_values(int a[], int n)
{
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		printf("%7d", a[i]);
	}
}

void magnify_array_values(int a[], int n,int magnify_factor)
{
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		a[i] = a[i] * magnify_factor;
	}
}














/*
#include <stdio.h>

void magnify_three_values(int a, int b, int c, int magnify_factor);

void magnify_array_values (int a[], int n, int magnify_factor);

void print_array_values(int a[], int n);

int main()
{
int x = 10;
int y = 20;
int z = 30;

int my_array[5] = {1000, 2000, 3000, 4000, 5000} ;

int factor = 2;

printf("\n BEFORE: x = %d, y = %d, z = %d", x, y, z);

magnify_three_values(x, y, z, factor);

printf("\n AFTER : x = %d, y = %d, z = %d", x, y, z);

// PART 2 of the lab (LAB 4)
getchar();

printf("\n BEFORE ... changing ARRAY values ... ");
print_array_values(my_array, 5);

magnify_array_values(my_array, 5, factor);

printf("\n AFTER ... changing ARRAY values ... ");
print_array_values(my_array, 5);

getchar(); getchar();

return 0;

}
void magnify_three_values(int a, int b, int c, int magnify_factor)
{
a = a * magnify_factor;
b = b * magnify_factor;
c = c * magnify_factor;
}

void magnify_array_values (int a[], int n, int magnify_factor)
{
int i;

for (i = 0; i <= n-1; i++)
{
a[i] = a[i] * magnify_factor;
}
}

void print_array_values(int a[], int n)
{
int i;

printf("\n");

for (i = 0; i <= n-1; i++)
{
printf("%7d", a[i]);
}
}
*/