//NAME	:	Hai Nguyen
//DATE	:	Mar-12-2015
//COURSE:	CSCCI 281 A
//FILE	:	lab_08_bubble_sort.cpp
//GOAL	:	To complete Lab 8, sorting the number

/*
#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf_s("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf_s("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 getchar();getchar();
  return 0;
}
*/

//AUTHOR	FAHIM HAQUE
//COURSE	CSCI 281
//DATE	3/15/2015
//GOAL	FINISH LAB
//PURPOSE	Create an array with 5 students in the rows and three tests in the columns and calculate each student's average as well as the average for each test and the highest in each category.

#include<stdio.h>
int main(void)
{
int i; // Row equals to the number of student [5]
int j; // Column equals to the number of test [3]
int total;
int score[5][3]; // 5 Students, each student has 3 test scores
float avg;
float student_averages[5];
float test_averages[3];
// Part 1: Data entry is done first
for (i = 0; i <= 4; i++)
{
for (j = 0; j <= 2; j++)
{
printf("\n Please enter the numeric score for student %d in test %d: ", i+1, j+1);
scanf_s("%d", &score[i][j]);
}
}
// Part 2: Find the average score for each student
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
// Part 3: Find test average for each test
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