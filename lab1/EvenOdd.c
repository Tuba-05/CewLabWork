#include<stdio.h>

// taking a number as an input from user and checks whether it is even or odd.
    
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num%2 == 0)
       printf("%d is an even number.", num);
    else
       printf("%d is an odd number.", num);
    return 0;
}
