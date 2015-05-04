//AUTHOR    :    Hai Nguyen
//DATE        :    05-02-2015
//FILES        :    lab_13_pointer_swap.cpp
//GOAl        :    To finish lab 13
//PURPOSE    :    Write a C program that use POINTER to make swap() work

#include<stdio.h>

void swap(int a, int b);

void swap_2(int *a, int *b);

int main(void)
{
    int x = 10;
    int y = 20;
    
    printf("\n EXPERIMENT 1: Trying to make swap() work, W/O using POINTERS\n\n");
    printf("\n BEFORE swap, x = %d, y = %d", x, y);
    
    swap( x, y);

    printf("\n AFTER swap, x = %d, y = %d", x, y);

    printf("\n\n\n EXPERIMENT 2: Trying to make swap() work, using POINTERS\n\n");
    printf("\n BEFORE swap, x = %d, y = %d", x, y);
    
    swap_2( &x, &y);

    printf("\n AFTER swap, x = %d, y = %d", x, y);

    getchar();
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}