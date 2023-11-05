// 2. Write a program in C to print a string in reverse using pointers.

#include <stdio.h>
int main()
{
    char str[50], rev_str[50];  // declaring strings
    char *st_ptr = str, *rv_ptr = rev_str; // declaring pointers
    int i = -1;
    printf(" Input a string : ");
    gets(str);
    printf("Origional string: %s\n", str); 
    while(*st_ptr)
    {
     st_ptr++;
     i++;
    }
    while(i>=0)
    {
    st_ptr--;
    *rv_ptr = *st_ptr;
    rv_ptr++;
    --i;
    }
    *rv_ptr='\0';
    printf("Reverse of the string is : %s\n",rev_str);
    return 0;
}