// 1. Write a program in C to swap elements using call by reference.

#include<stdio.h>
void swap(int *a , int *b);
int main()
{
    int a, b;
    printf("enter first element:");
    scanf("%d", &a);
    printf("enter second element:");
    scanf("%d", &b);
    printf("Before swap: a = %d, b = %d", a, b);
    swap(&a, &b); 
    printf("\nAfter swap: a = %d, b = %d", a, b);      
    return 0;
}
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}