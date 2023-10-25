#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *head;
void insertFirst(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = val;
    temp->next = head;
    head = temp;
}
void insertLast(int val)
{
    // struct node *temp;
    struct node *temp,*temp2 = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = val;
    temp->next = NULL;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return;
}
void insertMiddle(int val, int place)
{
    struct node *temp,*temp2 = head;
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
        if (temp == NULL)
        {
            printf("Not found\n");
            return;
        }
    }
    printf("Got at index %d\n", i);
}
void deleteElement(int val)
{
    struct node *temp = head;
    if (head->value == val)
    {
        printf("deleted element is %d\n", head->value);
        head = head->next;
        return;
    }
    while (temp->next->value != val)
    {
        temp = temp->next;
    }
    printf("Deleted element is %d\n", temp->next->value);
    temp->next = temp->next->next;
}
void printAll()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf(" %d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    insertFirst(1);
    insertFirst(2);
    insertLast(8);
    insertMiddle(5, 2);
    printAll();
    search(5);
    deleteElement(2);
    printAll();
    return 0;
}