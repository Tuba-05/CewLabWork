// 5. Write a C program to add two matrices using pointers.

#include<stdio.h>
int main()
{
    int mat1[2][3] = {{0,2,4},{6,8,0}}, mat2[2][3] = {{7,9,1},{1,3,5}};
    int mat3[2][3], i, j, k;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
