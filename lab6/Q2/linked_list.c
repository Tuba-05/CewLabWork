#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode (int data)
{
    struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *insert (struct Node*head, int data)
{
    struct Node *newNode = createNode (data);
    if (head == NULL)
    {
    return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL)
    {
    current = current->next;
    }
    current->next = newNode;
    return head;
}

struct Node *deleteNode (struct Node *head, int data)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    while (current != NULL && current->data != data)
    {
    prev = current;
    current = current->next;
    }
    if (current == NULL)
    {
    printf ("Node with value notfound\n");
    return head;
    }
    if (prev == NULL)
    {
    head = current->next;
    }
    else
    {
    prev->next = current->next;
    }
    free (current);
    return head;
}

struct Node *searchNode (struct Node *head, int data)
{
    struct Node *current = head;
    while (current != NULL)
    {
    if (current->data == data)
    {
    return current;
    }
    current = current->next;
    }
    return NULL;
    }
    void printList (struct Node *head)
    {
    struct Node *current = head;
    while (current != NULL)
    {
    printf ("%d -> ", current->data);
    current = current->next;
    }
    printf ("NULL\n");
}

void freeList (struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
    struct Node *temp = current;
    current = current->next;
    free (temp);
    }
}
