//AUTHOR	:	Hai Nguyen
//COURSE	:	CSCI 281 A
//DATE		:	3/12/2015
//FILE		:	lab_09_recursion.cpp
//GOAL		:	Finish lab 09
//PURPOSE	:	Understand Recursion

#include<stdio.h>

int fact_loop(int n);
int fact_rec(int n);

int sum_formula(int n);
int sum_square_formula(int n);
int sum_cube_formula(int n);

int sum_loop(int n);
int sum_square_loop(int n);
int sum_cube_loop(int n);

int sum_recursion(int n);
int sum_square_recursion(int n);
int sum_cube_recursion(int n);

int main(void)
{
    int n;
    int result_1;
    int result_2;
    int result_3;

    //PROGRAM 1:
    //Find FACTORIAL with / without RECURSION
    printf("\n Please enter a number: ");
    scanf_s("%d", &n);

    result_1 = fact_loop(n);
    result_2 = fact_rec(n);

    printf("\n The Factorial of %d is %d, using ITERATION", n, result_1);
    printf("\n The Factorial of %d is %d, using RECURSION", n, result_2);

    //PROGRAM 2:
    //To get the summation of the first n program

    printf("\n\n Please enter any integer, and I will tell you the summation of the first n integer: ");
    scanf_s("%d", &n);

    result_1 = sum_formula(n);
    result_2 = sum_loop(n);
    result_3 = sum_recursion(n);

    printf("\n The summation of the first %d numbers, using a Formula, is %d", n, result_1);
    printf("\n The summation of the first %d numbers, using a Loop, is %d", n, result_2);
    printf("\n The summation of the first %d numbers, using a Recursion, is %d", n, result_3);

    //PROGRAM 3:
    //To get the summation of the first square n program

    printf("\n\n Please enter any integer, and I will tell you the summation of the first square n integer: ");
    scanf_s("%d", &n);

    result_1 = sum_square_formula(n);
    result_2 = sum_square_loop(n);
    result_3 = sum_square_recursion(n);

    printf("\n The summation of the first %d numbers, using a Formula, is %d", n, result_1);
    printf("\n The summation of the first %d numbers, using a Loop, is %d", n, result_2);
    printf("\n The summation of the first %d numbers, using a Recursion, is %d", n, result_3);

    //PROGRAM 4:
    //To get the summation of the first cube n program

    printf("\n\n Please enter any integer, and I will tell you the summation of the first cube n integer: ");
    scanf_s("%d", &n);

    result_1 = sum_cube_formula(n);
    result_2 = sum_cube_loop(n);
    result_3 = sum_cube_recursion(n);

    printf("\n The summation of the first %d numbers, using a Formula, is %d", n, result_1);
    printf("\n The summation of the first %d numbers, using a Loop, is %d", n, result_2);
    printf("\n The summation of the first %d numbers, using a Recursion, is %d", n, result_3);

    getchar();getchar();
    return 0;
}



int fact_loop(int n)
{
    int i;
    int f = 1;
    
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int fact_rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact_rec(n - 1));
    }
}
//Sum Formula 
int sum_formula(int n)
{
    int total = 0;
    total = (n*(n+1))/2;

    return total;
}

int sum_square_formula(int n)
{
    int total = 0;
    total = (n*(n+1)*(2*n+1))/6;

    return total;
}

int sum_cube_formula(int n)
{
    int total = 0;
    total = ((n*(n+1))/2)*((n*(n+1))/2);

    return total;
}

//Sum Loop
int sum_loop(int n)
{
    int i;
    int total = 0;

    for (int i = 0; i <= n; i++)
    {
        total = total + i;
    }
    
    return total;
}

int sum_square_loop(int n)
{
    int i;
    int total = 0;

    for (int i = 0; i <= n; i++)
    {
        total = total + i*i;
    }
    
    return total;
}

int sum_cube_loop(int n)
{
    int i;
    int total = 0;

    for (int i = 0; i <= n; i++)
    {
        total = total + i*i*i;
    }
    
    return total;
}


//Sum Recursion
int sum_recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n + sum_recursion(n-1));
    }
}

int sum_square_recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return ((n * n) + sum_square_recursion(n-1));
    }

}

int sum_cube_recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return ((n * n * n )+ sum_cube_recursion(n-1));
    }

}
