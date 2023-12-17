// 2. Create a program that reads a text file and counts the number of words in it. Display the
// total number of words at the end.

#include<stdio.h>
int main()
{
    int count = 0 ;
    char myfile[500];
    char ch;
    FILE *file;
    file = fopen("lab05.txt", "r");
    while((ch = fgetc(file)) != EOF)
    {
        if(ch == ' ' || ch == ',' || ch == '.')
        {
            count ++;     
        }
    }
    fclose(file);
    printf("Total number of words in file = %d", count);
    return 0;
}
