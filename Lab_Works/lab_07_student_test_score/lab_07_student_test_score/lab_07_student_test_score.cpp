//NAME	:	Hai Nguyen
//DATE	:	Mar-06-2015
//COURSE:	CSCI 281 A
//FILE	:	lab_07_student_test_score.cpp
//GOAL	:	To complete Lab 7, using ARRAY to find the average score of each student
//			and average score of each test

#include<stdio.h>

int main(void)
{
	int i;	// Row equals to the number of student [5]
	int j;	// Column equals to the number of test [3]
	int total;
	int score[5][3];	// 5 Students, each student has 3 test scores
	float avg;
	float student_averages[5];
	float test_averages[3];

//	Part 1: Data entry is done first

	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("\n Please enter the numeric score for student %d in test %d: ", i+1, j+1);
			scanf_s("%d", &score[i][j]);
		}
	}

//	Part 2: Find the average score for each student

	for (i = 0; i <= 4; i++)
	{
		total = 0;
		for (j = 0; j <= 2; j++)
		{
			total = total + score[i][j];
		}
		avg = total / 3.0;
		student_averages[i] = avg;
		printf("\n The average score for student %d is %.2f", i+1, avg);
	}

//	Part 3: Find test average for each test
	
	for (j = 0; j <= 2; j++);
	{
		total = 0;
		for (i = 0; i <= 4; i++)
		{
			total = total + score[i][j];
		}
		avg = total / 5.0;
		test_averages[j] = avg;
		printf("\n The average score for test %d is %f", j, avg);
	}

	getchar();getchar();
	return 0;
}
