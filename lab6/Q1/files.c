#include "files.h"
#include <stdlib.h>
#include <stdio.h>

int doesExist(char* file)
{
    FILE* fptr;
    if(!(fptr = fopen(file, "r"))){
    return 0;
}
return 1;
}
void read(char* file, FILE* stream)
{
    char* buff = malloc(10 *
    sizeof(char));
    stream = fopen(file, "r");
    while(fgets(buff, 10, stream))
    {
    printf("%s", buff);
    }
    fclose(stream);
}
void write(char* file, FILE* stream,char* str)
{
    stream = fopen(file, "a");
    fprintf(stream, str);
    fclose(stream);
}