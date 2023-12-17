// 3. Implement a student database system using a file. Include features to add, delete, modify,
// and display student records.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct std {
    char name[100]; 
    int roll; 
    float marks;
    };
int main() {
    struct std* st = NULL; int count = 0; FILE* fptr;
    int rollno; int rollnum;
    while (1) 
    {
    printf("\n_____STUDENT MANAGEMENT_____\n"); 
    printf("\n1. ADD STUDENT\n"); 
    printf("\n2. VIEW STUDENT RECORDS \n"); 
    printf("\n3. DELETE STUDENT RECORDS \n"); 
    printf("\n4. MODIFY STUDENT RECORDS \n"); 
    printf("\n5. EXIT \n"); 
    printf("Enter your choice: "); 
    int choice;
    scanf("%d", &choice); 
    switch (choice) 
    { 
        case 1: 
        count++; 
        if (count == 1) 
        { 
            st = (struct std*)malloc(count * sizeof(struct std)); 
            } 
        else 
        { 
            st = (struct std*)realloc(st, count * sizeof(struct std));
        } 
        if (st == NULL) 
        { 
            fprintf(stderr, "Memory allocation failed!\n"); 
            return 1;
        } 
        printf("Enter student details:\n"); 
        printf("Name: ");scanf("%s", st[count - 1].name); 
        printf("Roll: ");scanf("%d", &st[count - 1].roll); 
        printf("Marks: ");scanf("%f", &st[count - 1].marks); 
        fptr = fopen("std_database.txt", "a"); 
        if (fptr == NULL) 
        { 
            fprintf(stderr, "Error opening the file.\n"); 
            return 1;
        } 
        fprintf(fptr, "NAME: %s\n", st[count - 1].name); 
        fprintf(fptr, "ROLL NO: %d\n", st[count - 1].roll); 
        fprintf(fptr, "MARKS: %f\n", st[count - 1].marks); 
        fclose(fptr); 
        break;

        case 2: 
        fptr = fopen("std_database.txt", "r"); 
        if (fptr == NULL) 
        { 
            fprintf(stderr, "Error opening the file.\n"); 
            return 1;
        } 
        char line[1000]; 
        while (fgets(line, sizeof(line), fptr) != NULL) 
        { 
            printf("%s", line);
        }   
            fclose(fptr);
            break;

        case 3: 
        printf("Enter the roll number of the student you want to delete: "); 
        scanf("%d", &rollno); 
        int index_ = -1; 
        for (int i = 0; i < count; i++) 
        { 
            if (st[i].roll == rollno)
            { 
                index_ = i; break;
            }
        }
        if (index_ != -1) 
        {
            for (int i = index_; i < count - 1; i++) 
            { 
                strcpy(st[i].name, st[i + 1].name); 
                st[i].roll = st[i + 1].roll; 
                st[i].marks = st[i + 1].marks;
            } 
        count--; 
        st = (struct std*)realloc(st, count * sizeof(struct std)); 
        printf("Student with roll number %d deleted successfully!\n", rollno); 
        fptr = fopen("std_database.txt", "w"); 
        if (fptr == NULL) 
        { 
            fprintf(stderr, "Error opening the file.\n"); 
            return 1;
        } 
        for (int i = 0; i < count; i++) 
            { 
            fprintf(fptr, "NAME: %s\n", st[i].name); 
            fprintf(fptr, "ROLL NO: %d\n", st[i].roll); 
            fprintf(fptr, "MARKS: %f\n", st[i].marks);
            } 
            fclose(fptr); 
        } 
        else 
        { 
            printf("Student with roll number %d not found.\n", rollno); 
        } 
        break; 
        
        case 4: 
        printf("Enter the roll number of the student to modify: "); 
        scanf("%d", &rollnum); 
        int index = -1; 
        for (int i = 0; i < count; i++) 
        { 
            if (st[i].roll == rollnum) 
            { 
                index = i; break;
            }
        } 
        if (index != -1) 
        { 
            printf("Enter new details for the student:\n"); 
            printf("Name: "); scanf("%s", st[index].name); 
            printf("Roll: ");scanf("%d", &st[index].roll); 
            printf("Marks: "); scanf("%f", &st[index].marks); 
            printf("Student with roll number %d modified successfully!\n", rollnum); 
            fptr = fopen("std_database.txt", "w"); 
        if (fptr == NULL) 
        { 
            fprintf(stderr, "Error opening the file.\n"); 
            return 1;
        } 
        for (int i = 0; i < count; i++) 
        { 
            fprintf(fptr, "NAME: %s\n", st[i].name); 
            fprintf(fptr, "ROLL NO: %d\n", st[i].roll); 
            fprintf(fptr, "MARKS: %f\n", st[i].marks);
        } 
        fclose(fptr); 
        } 
        else 
        { 
            printf("Student with roll number %d not found.\n", rollnum);
        } 
        break; 
        
        case 5: 
        free(st); 
        printf("Exiting the program.\n"); 
        return 0;
    }
    } 
    return 0;
    }