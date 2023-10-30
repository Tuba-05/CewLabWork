// 3. Write a C program to compare two strings without using string library functions.

#include<stdio.h>
int main()
{
    char s1[20], s2[20];
    int i, s = 0;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    for (i = 0; s1[i] != 0; i++)
    {
        if (s1[i] != s2[i])
        {
            s = 1;
            break;  
        }
    }
    if (s == 1)
    {
        printf("Strings are not same");
    }
    else
    {
        printf("Strings are same.");
    }
    return 0;
}
