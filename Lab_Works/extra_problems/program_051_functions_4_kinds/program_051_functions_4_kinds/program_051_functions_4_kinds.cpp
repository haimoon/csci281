//GOAL: Learn 4 kinds of FUNCTIONS:
//		1: no output, no input	VOID
//		2: 1 output, no input
//		3: 1 output, 1 input
//		4: no output, 1 input	VOID

#include<stdio.h>

void print_welcome_message();
int get_a_number_from_user();
int get_square_of(int);
void print_cube_of(int);

int main(void)
{
	int x;
	int y;
	
	print_welcome_message();

	x = get_a_number_from_user();
	y = get_square_of(x);

	printf("\n The square of %d is %d", x, y);
	
	print_cube_of(x);

	getchar();getchar();
	return 0;
}

void print_welcome_message()	// No output, No input
{
	printf("\n Welcome to program.");
	printf("\n Enter an integer and I will tell you the square of the number.");
}

int get_a_number_from_user()	// 1 output, No input
{
	int n;
	printf("\n Please enter an integer: ");
	scanf_s("%d", &n);
	return n;
}

int get_square_of(int n)		// 1 output, 1 input
{
	return n * n;
}

void print_cube_of(int n)		// No out put, 1 input
{
	printf("\n The cube of %d is %d", n, n * n * n);
}
