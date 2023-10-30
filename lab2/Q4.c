// 4. Write a C program to read a sentence and replace lowercase characters with uppercase and viceversa.

#include<stdio.h>
// range for lowercase letters 97-122 ---> -32
// range for uppercase letters 65-90 ---> +32  
int main()
{
    char str[25], st[25];
    int i;
    printf("Enter string: ");
    scanf("%s", &str);
    for (i = 0; str[i] != 0 ; i++)
    {
        st[i] = str[i];
    }
    for (i = 0; str[i] != 0; i++)
    { 
        if (str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i] -32;
        }
        else if (str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] +32;
        }    
    }    
    printf("%s ---> %s", st, str);
    return 0;
}
