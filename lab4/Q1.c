// 1. Write a program that simulates a simple address book. Define a structure to store contact
// information (name, email, phone number). Allow the user to add new contacts to the
// address book dynamically. Use dynamic memory allocation for storing the contacts using
// malloc and update the memory allocation using realloc when adding new contacts.
// Implement an option to delete a contact and free the memory. Ensure that memory is
// properly managed throughout the program's execution.

#include<stdio.h>
#include<stdlib.h>

struct Address_book
{
    char name[20];
    char email[20];
    int phone_no[11]; 
};
int main()
{
    int i, no_of_records;
    char x;
    printf("Enter number of records you want to add: ");
    scanf("%d ", &no_of_records);
    struct Address_book *ptr;
    ptr = malloc(no_of_records * sizeof(struct Address_book ));
    if (ptr != NULL)
    {
        while(1)
        {
            for (size_t i = 0; i < no_of_records; i++)
            {
                printf("\nRecord: %d" , i+1);
                printf("\nName: ");
                scanf("%s", ptr[i].name);
                printf("\nEmail: ");
                scanf("%s", ptr[i].email);
                printf("Phone Number: ");
                scanf("%d", &ptr[i].phone_no);
            }
            
            for (size_t i = 0; i < no_of_records; i++)
            {
                printf("\nName: %s", ptr[i].name);
                printf("\nEmail: %s", ptr[i].email);
                printf("\nPhone Number: %d", ptr[i].phone_no);
            }
            printf("\nDoyou want to add new records?\n 'Y' or 'N' ");
            scanf("%c", &x);
            if(x == 'N')
            {
                printf("out of loop.");
                break;
            }
        }
    }
    else
    {
        printf("Memory not allocated.");
    }

    free(ptr);        
    return 0;
}

