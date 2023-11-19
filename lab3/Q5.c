// 5. Write a C program to add two matrices using pointers.

#include<stdio.h>
int main()
{
    int mat1[2][3] = {{0,2,4},{6,8,0}}, mat2[2][3] = {{7,9,1},{1,3,5}};
    int mat3[2][3], i, j;
    int *ptr1[2][3];
    int *ptr2[2][3];
    int *ptr3[2][3];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
           ptr1[i][j] = &mat1[i][j];
           ptr2[i][j] = &mat2[i][j];
           ptr3[i][j] = &mat3[i][j];      
        }
    }
    
    for (size_t i = 0; i < 2; i++)
    {
        printf("{ ");
        for (size_t j = 0; j <= 2; j++)
        {
            *ptr3[i][j] = *ptr1[i][j] + *ptr2[i][j];
            printf("%d, ", *ptr3[i][j]);
        }
        printf("}\n");
    }
    return 0;
}
