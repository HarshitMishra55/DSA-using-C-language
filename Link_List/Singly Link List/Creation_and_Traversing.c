#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} LinkedList;

int printLinkList(LinkedList *head)
{
    LinkedList *ptr = head;
    printf("Your Singly Linked List is ==> ");
    while (ptr != NULL)
    {
        printf("%d %p --> ", ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("\b\b\b\b    \n"); // For removing the arrow from the last
    return 0;
}

LinkedList *createNewNode(int val)
{
    LinkedList *newNode = (LinkedList *)malloc(sizeof(LinkedList));

    if (newNode == NULL)
    {
        printf("Memory Not Allocated\n");
        free(newNode);
        exit(1);
    }
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    LinkedList *head = (LinkedList *)malloc(sizeof(LinkedList));

    // Check if memory allocation was successful
    if (head == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    head->data = 10;
    head->next = NULL;
    LinkedList *newNode = createNewNode(55);
    printLinkList(head);

    free(head);
    free(newNode);

    return 0;
}