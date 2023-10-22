#include<stdio.h>

// Creating Times Table of a number as input by the user.

int main()
{
    int num, a = 1;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Table of %d", num);
    while (a <= 10)
    {
        printf("%d X %d = %d\n", num, a, num * a);
        a += 1;
    }
    return 0;
}
