#include<stdio.h>

// 5. Write a function to calculate the nth Fibonacci number and call it recursively to print
// the Fibonacci series.

int main()
{
    int count, a = 1, b = 1;
    printf("Enter range for Fibonacci Series : ");
    scanf("%d", &count);
    printf("Fibonacci Sereies : %d %d", a, b);
    count = count - 2;
    while (count)
    {
        int c;
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
        count = count - 1;
    }
    return 0;
}
