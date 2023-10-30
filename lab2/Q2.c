// 2. Write a C program to make the following pattern as a pyramid with an asterisk.

#include<stdio.h>
int main()
{
    int n, i, j;
    printf("enter range:");
    scanf("%d", &n);
    for  (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }
    return 0;
}
