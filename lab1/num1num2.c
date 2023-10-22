#include<stdio.h>

// taking two numbers as input from user.

int main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    if (num1 > 5 && num2 > 5)
        printf("%d", num1 + num2);
    else if (num1 > 5 || num2 > 5)
        printf("%d", num1 * num2);
    else if (num1 < 5 && num2 < 5)
        printf("num1 : %d\n num2 : %d", num1 + 1, num2 + 1);
    else
        printf("Hello world.");
    return 0;
}
