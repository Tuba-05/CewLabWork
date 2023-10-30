// 1. Write a C program to display the first n odd natural numbers and their sum using for, while and
// do-while loop.

#include<stdio.h>
int main()
{
    int n, i=0, sum = 0 ;
    printf("enter limit of odd natural numbers:");
    scanf("%d", &n);
    printf("Using For Loop \n");
    for (i = 0; i <= 2 * n; i++)
    {        
        if (i % 2 != 0)
        {
           printf(" %d ", i);
           sum = sum + i;
        }       
    }
    printf("\n Sum of first %d odd natural numbers is %d.", n, sum);
    sum = 0, i = 0;
    printf("\nUsing While Loop \n");  
    while (i <= 2 * n)
    {
        if (i % 2 != 0)
        {
           printf(" %d ", i);
           sum = sum + i;
        }
        i = i + 1;
    }
    printf("\nSum of first %d odd natural numbers is %d.", n, sum);  
    i = 0, sum = 0 ;
    printf("\nUsing Do While Loop \n");    
    do
    {
        if (i % 2 != 0)
        {
           printf("%d ", i);
           sum = sum + i;
        }
        i = i + 1;
    } while (i <= 2 * n);
    printf("\nSum of first %d odd natural numbers is %d.", n, sum);  
    return 0;    
}
