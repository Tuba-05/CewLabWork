// 3. Write a C program to input and print array elements using pointers.

#include<stdio.h>

int main()
{
    const int index = 5;
    int arr_[index], i, e; 
    int* ptr[index];

    for (size_t i = 0; i < index; i++)
    {
        printf("Input array element %d =", i);
        scanf(" %d", &e);
        arr_[i] = e;
    }
    for (size_t i = 0; i < index; i++)
    {
        ptr[i] = &arr_[i];
    }
    for (size_t i = 0; i < index; i++)
    {
        printf("\n arr[%d] = %d" , i, *ptr[i]);
    }
    return 0;
}
