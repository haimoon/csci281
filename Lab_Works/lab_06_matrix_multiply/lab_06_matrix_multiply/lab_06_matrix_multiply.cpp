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

	printf("\n The first matrix is:");
	print_matrix(A);

	printf("\n The second matrix is:");
	print_matrix(B);

	printf("\n The multiply of matrix A and B is:");
	print_matrix(C);

	getchar();getchar();
	return 0;
}

print_matrix(int A[3][3])