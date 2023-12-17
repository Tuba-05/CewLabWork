// 1. Write a program to create a new text file and write some text into it. Open the file in
// append mode and add more text to it. Read the contents of the file and display them on
// the console.

#include<stdio.h>
int main()
{
    char myString[100];
    FILE *fptr;
    //  CREATING FILE
    FILE *file;
    file = fopen("lab5.txt", "w"); // open file in write mode
    if (file != NULL)
    {
        fprintf(file, "My Intro:-\nName : %s\nRoll# : %s\n", " Tuba ", " CS-22021 ");
    }
    else
    {
        perror("Unable to open file.");
    }
    fclose(file);

    file = fopen("lab5.txt", "a"); // open file in apend mode
    if (file != NULL)
    {
        fprintf(file, "Department : %s\nUniversity : %s\n", " CIS ", " NED ");
    }
    else
    {
        perror("Unable to open file.");
    }
    fclose(file);
 
    file = fopen("lab5.txt", "r"); // open file in read mode
    printf("Read from file:\n");
    while (fgets(myString, sizeof(myString), file) != NULL)
    {
        printf("%s", myString);
    }
    
    fclose(file);

    return 0;
}
