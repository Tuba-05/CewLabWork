#include<stdio.h>

// 2. Write a C program that takes the height and width of a rectangle as an input from user
// and compute the perimeter and area of a rectangle.

int main()
{
    float width, height;
    printf("Enter length: ");
    scanf("%f", &width);
    printf("Enter heigth: ");
    scanf("%f", &height);
    printf("Area of Rectangle = %.3funits.", width * height);
    printf("\nPerimeter of Rectangle = %.3funits.", 2 * (width + height));
    return 0;
}
