#include <stdio.h>
#include <stdlib.h>

//Definig new node
struct node
{
    int value;
    struct node *next;
};

//Creating a head node
struct node *head = NULL;

//function for Insert in 1st of Linked List
void insertFirst(int val)
{
    struct node *temp, *temp2 = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = val;
    if (head == NULL)
    {
        temp->next = temp;
        head = temp;
        return;
    }
    temp->next = head;
    while (temp2->next != head)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    head = temp;
}

//Function for Insert in last of Linked List
void insertlast(int val)
{
    struct node *temp, *temp2 = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = val;
    temp->next = head;
    while (temp2->next != head)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

// Inserting in middle of the linked list
void insertMiddle(int val, int place)
{
    struct node *temp, *temp2 = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = val;
    for (int i = 1; i < place - 1; i++)
    {
        temp2 = temp2->next;
        if (temp2 == NULL)
        {
            printf("Enter lower value\n");
            return;
        }
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

// Searching in node
void search(int val)
{
    if (head == NULL)
    {
        printf("No element in list\n");
        return;
    }
    struct node *temp = head;
    int i;
    for (i = 1; temp->value != val; i++)
    {
        temp = temp->next;
        if (temp == head)
        {
            printf("Not found\n");
            return;
        }
    }
    printf("Got at %d\n", i);
}

// Deleting of particular node
void deleteElement(int val)
{
    struct node *temp = head;
    while (temp->next->value != val)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        head = temp->next->next;
    }
    temp->next = temp->next->next;
}

// printing node
void printAll()
{
    struct node *temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("%d\n", temp->value);
}
int main()
{
    //Calling all functions
    insertFirst(1);
    insertFirst(2);
    insertlast(5);
    insertMiddle(6, 2);
    printAll();
    search(2);
    deleteElement(2);
    printAll();
    return 0;
}