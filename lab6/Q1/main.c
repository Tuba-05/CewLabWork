//1. Create a header file called that provides functions for reading and writing files. Define functions for reading text from a file, 
// writing text to a file, and checking file existence.Implement these functions in a source file and use them in a program.

#include <stdio.h>
#include "files.h"
int main()
{
    FILE* str;
    printf("%d\n",doesExist("new.txt"));
    write("new.txt", str, "\nWorks like\na charm!");
    read("new.txt", str);
    return 0;
}