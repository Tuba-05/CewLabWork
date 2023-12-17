#ifndef LINKED_LIST_h
#define LINKED_LIST_h

struct Node *createNode (int data);
struct Node *insert (struct Node
*head, int data);
struct Node *deleteNode (struct
Node *head, int data);
struct Node *searchNode (struct
Node *head, int data);
void printList (struct Node *head);
void freeList (struct Node *head);
#endif