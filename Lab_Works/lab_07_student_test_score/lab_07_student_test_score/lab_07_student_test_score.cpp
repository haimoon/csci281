//NAME	:	Hai Nguyen
//DATE	:	Mar-06-2015
//COURSE:	CSCI 281 A
//FILE	:	lab_07_student_test_score.cpp
//GOAL	:	To complete Lab 7, using ARRAY to find the average score of each student
//			and average score of each test

/*
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
			printf("Please enter the numeric score for student %d in test %d: ", i+1, j+1);
			scanf_s("%d", &score[i][j]);
		}
	}

//	Part 2: Find the average score for each student

	for (i = 0; i <= 4; i++)
	{
		total = 0;
		avg = 0;
		for (j = 0; j <= 2; j++)
		{
			total = total + score[i][j];
		}
		avg = total / 3.0;
		student_averages[i] = avg;
		printf("\n The average score for student %d is %.2f", i+1, student_averages[i]);
	}

//	Part 3: Find test average for each test
	
	for (j = 0; j <= 2; j++)
	{
		total = 0;
		avg = 0;
		for (i = 0; i <= 4; i++)
		{
			total = total + score[i][j];
		}
		avg = total / 5.0;
		test_averages[j] = avg;
		printf("\n The average score for test %d is %f", j+1, avg);
	}

	getchar();getchar();
	return 0;
}
*/

#include<stdio.h>

int main(void)
{
	int i;	// Row, 5 students
	int j;	// Column, 3 tests
	int scores[5][3];	// Score for 5 students in 3 tests
	int total;
	float avg;
	float avg_student_scores[5];	//	Array to store average student score in 3 tests
	float avg_test_scores[3];		//	Array to store average test score in each test

	//	Input score for each student in each test
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("\n Please enter numeric score for student %d in test %d: ", i+1, j+1);
			scanf_s("%d", &scores[i][j]);
		}
	}

	//	Compute the average student score for each student in 3 tests
	for (i = 0; i <= 4; i++)
	{
		total = 0;
		avg = 0;
		for ( j = 0; j <= 2; j++)
		{
			total = total + scores[i][j];
		}
		avg = total / 3.0;
		avg_student_scores[i] = avg;
		printf("\n The average student score for student %d is %.2f", i+1, avg_student_scores[i]);
	}

	//	Compute the average test score for each test
	for (j = 0; j <= 2; j++)
	{
		total = 0;
		avg = 0;
		for (i = 0; i <= 4; i++)
		{
			total = total + scores[i][j];
		}
		avg = total / 5.0;
		avg_test_scores[j] = avg;
		printf("\n The average test score for test %d is %.2f", j+1, avg_test_scores[j]);
	}


	getchar();getchar();
	return 0;
}
