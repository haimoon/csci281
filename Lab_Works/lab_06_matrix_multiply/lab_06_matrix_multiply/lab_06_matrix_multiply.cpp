//NAME	:	Hai Nguyen
//DATE	:	Mar-05-2015
//COURSE:	CSCI 281 A
//FILE	:	lab_06_matrix_multiply.cpp
//GOAL	:	To complete Lab 6, learning to input 2 matrixes and multiply them

#include<stdio.h>

void print_matrix(int A[3][3]);

int main(void)
{
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};	//	The first matrix A
	int B[3][3] = {{1,1,1},{2,2,2},{3,3,3}};	//	The second matrix B
	int C[3][3];								//	The result

	int i;	// Row
	int j;	// Colum
	int k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			C[i][j] = 0;
			for (k = 0; k <= 2; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}


	printf("\n The first matrix is:");
	print_matrix(A);

	printf("\n The second matrix is:");
	print_matrix(B);

	printf("\n The multiply of matrix A and B is:");
	print_matrix(C);

	getchar();getchar();
	return 0;
}

void print_matrix(int A[3][3])
{
	int i;
	int j;

	for (i = 0; i <= 2; i++)
	{
		printf("\n");
		for (j = 0; j<= 2; j++)
		{
			printf("%6d", A[i][j]);
		}
	}
}
