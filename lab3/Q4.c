// 4. Write a C program to search for an element in an array using pointers.

#include<stdio.h>
int main()
{
    const int index = 5; 
    int  *ptr[index];
    int arr[5] = {1,2,3,4,5}, a, i, check = 0;
    for ( i = 0; i < index; i++)
    {
        ptr[i] = &arr[i];
    }    
    printf("Enter which element you want to access from range 0-4 in array:");
    scanf("%d", &a);
    for (i = 0; i < index; i++)
    {
        if (*ptr[i] == a)
        {
            printf("The element at arr[%d] is %d.", i, *ptr[i]);
            check = 1;
            break;
        }
    }
    if (check == 0)
        {
            printf("There is no element '%d' in array.", a);
        }
    return 0;
}
