#include<stdio.h>

// 3. Write a C program to accept the height of a person in centimeters and categorize the
// person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
// Height>=165cm – Tall).

int main()
{
    float height;
    printf("Enter height : ");
    scanf("%f", &height);
    if (height < 150)
       printf("The person is DWARF.");
    else if(height == 150)
       printf("The person is AVERAGE.");
    else if (height >= 165)
       printf("The person is TALL.");              
    return 0;
}
