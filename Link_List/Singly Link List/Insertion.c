#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int printLinkList(Node *head)
{
    Node *ptr = head;
    printf("Your Singly Linked List is ==> ");
    while (ptr != NULL)
    {
        printf("%d %p --> ", ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("\b\b\b\b    \n"); // For removing the arrow from the last
    return 0;
}

// This function adds the newly created node at the last
int insertNewNodeAtLast(Node **head, int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    // Check if memory allocation was successful
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = val;
    newNode->next = NULL;

    // If the Linked List is empty, make the new node the head
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node *ptr = *head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    return 0;
}

int insertNewNodeAtStart(Node **head, int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    // check if memory allocation was successful
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
    return 0;
}

int insertNewNodeAtGivenPosition(Node **head, int val, int pos)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    // Check if memory allocation was successful
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = val;
    newNode->next = NULL;

    // Special case: If the list is empty, or if inserting at the head
    if (*head == NULL || pos == 0)
    {
        *head = newNode;
        return 0;
    }
    else
    {
        Node *ptr = *head;
        // Traverse to the node before the position where we want to insert
        for (int i = 1; i < pos - 1 && ptr != NULL; i++)
        {
            ptr = ptr->next;
        }
        // If the position is out of bounds, ptr will be NULL
        if (ptr == NULL)
        {
            printf("Position out of bounds!\n");
            free(newNode);
            return -1;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
    }

    return 0;
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node));

    // Check if memory allocation was successful
    if (head == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    head->data = 10;
    head->next = NULL;

    insertNewNodeAtLast(&head, 55);
    insertNewNodeAtLast(&head, 554);
    insertNewNodeAtLast(&head, 4545);
    insertNewNodeAtLast(&head, 111);
    insertNewNodeAtStart(&head, 4444);

    printLinkList(head);

    insertNewNodeAtStart(&head, 155454);
    insertNewNodeAtLast(&head, 55);
    printLinkList(head);
    insertNewNodeAtGivenPosition(&head, 789789, 3);
    printLinkList(head);

    free(head);

    return 0;
}