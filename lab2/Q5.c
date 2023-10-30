// 5. Write a C program to print all unique elements in an array.

#include<stdio.h>
int main()
{
    int arr1[10] = {1,2,3,2,1,4,4,5,9,5,}, arr2[11] = {0}, i, j, count = 0;
    for (i=0; i < 10; i++)
    {
        int isunique = 1;
        for (j=1; j <= 10 ; j++)
        {
            if (i != j && arr1[i] == arr1[j])
            {
                isunique = 0;    
                break;
            }
        }
        if (isunique == 1)
        {
            arr2[count] = arr1[i];
            count ++ ;
        }
    }
    printf("Actual elements in array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nUnique elements in array: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
