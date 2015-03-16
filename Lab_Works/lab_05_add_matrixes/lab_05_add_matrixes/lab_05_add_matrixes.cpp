//NAME	:	Hai Nguyen
//DATE	:	Feb-26-2015
//COURSE:	CSCI 281 A
//FILE	:	lab_05_add_matrixes.cpp
//GOAL	:	To complete Lab 5, learnign to create 2-D arrays with two 3x3 matrixes and display the result

#include<stdio.h>

void print_matrix(int A[3][3]);

int main(void)
{
	int A[3][3] = {{1,1,1} , {1,1,1} , {1,1,1}};
	int B[3][3] = {{2,2,2} , {2,2,2} , {2,2,2}};
	int C[3][3];

	int i;	// Row
	int j;	// Colum

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("\n The first matrix is:");
	print_matrix(A);

	printf("\n The second matrix is:");
	print_matrix(B);

	printf("\n The third matrix is:");
	print_matrix(C);
	
	getchar();
	return 0;
}

void print_matrix(int A[3][3])
{
	int i;
	int j;

	for (i = 0; i <= 2; i++)
	{
		printf("\n");

		for (j = 0; j <= 2; j++)
		{
			printf("\%4d", A[i][j]);
		}
	}
}
