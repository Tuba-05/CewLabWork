// 2. Develop a header file for a linked list. Define the necessary functions for this data structure, and implement 
// them in a source file. Then, write a program to demonstrate the data structure's usage.

#include <stdio.h>
#include "linked_list.h"

int main()
{
    struct Node *head = createNode
    (5);
    insert(head, 4);
    insert(head, 3);
    printList(head);
    head = deleteNode(head, 5);
    printList(head);
    struct Node *head2 = searchNode
    (head, 2);
    printList(head2);
    freeList(head2);
    return 0;
}