#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

int* add(int* mat1, int r1, int c1, int* mat2, int r2, int c2)
{
if(c1 == c2 && r1 == r2)
   {
    int* mat3 = (int*)malloc(r1 * c1 *
    sizeof(int)); 
    // Use dynamic memoryallocation
    int* ptr = mat3;
    for(int i = 0; i<r1; i++)
    {
        for(int j = 0; j<c1; j++)
        {
        *ptr = *mat1 + *mat2;
        // printf("%d ", *ptr);
        mat1++;
        mat2++;
        ptr++;
        }
    }
    return mat3;
   }
    return NULL;
}

int* mul(int *mat1, int r1, int c1, int* mat2, int r2, int c2)
{
    if(c1 == r2)
    {
    int* mat3 = (int*)malloc(r1 * c1 *
    sizeof(int)); 
    // Use dynamic memory allocation
    int* ptr = mat3;
    for(int i = 0; i<r1; i++)
    {
        for(int j = 0; j<c2; j++)
        {
            *ptr = 0;
            for(int k = 0; k<c1; k++)   
            {
            *ptr += mat1[i * c1 + k] *
            mat2[k * c2 + j];
            }
    // printf("%d ", *ptr);
    ptr++;
        }
    }
    return mat3;
    }
    return NULL;
}

int* transpose(int *mat1, int r, int c)
{
    int* mat = (int*)malloc(r * c * sizeof(int));
    int* ptr = mat;
    for(int j = 0; j<c; j++)
    {
        for(int i = 0; i<r; i++)
        {
        *ptr = mat1[i * c + j];
        ptr++;
        }
    }
    return mat;
}

int determinant(int* mat, int r, int c)
{
    if(r == c)
    {
    return mat[0] * mat[3] - mat[1] *
    mat[2];
    }
}

void print_mat(int* mat, int r, int c)
{
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
        printf("%4d ", *mat);
        mat++;
        }
    printf("\n");
    }
}
