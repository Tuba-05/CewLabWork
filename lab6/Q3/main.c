// 3. Develop a header file that defines functions for matrix operations, such as matrix addition, multiplication, transposition, 
// and determinant calculation. Implement these functions and use them to work with matrices in a program.

#include <stdio.h>
#include "matrix.h"

int main()
{
    int mat1[2][2] = {{1,2},{5,6}};
    int mat2[2][2] = {{1,2},{5,6}};
    printf("On Addition\n");
    int *mat3 = add(mat1, 2, 2, mat2,
    2, 2);
    print_mat(mat3, 2, 2);
    printf("\nOn Multiplication\n");
    int *mat4 = mul(mat1, 2, 2, mat2,
    2, 2);
    print_mat(mat4, 2, 2);
    printf("\nOn Transposition\n");
    int *mat5 = transpose(mat1, 2, 2);
    print_mat(mat5, 2, 2);
    printf("\nDeterminant of mat1\n");
    int num = determinant(mat1, 2,
    2);
    print_mat(mat1, 2, 2);
    printf("Determinant = %d", num);
    return 0;
}