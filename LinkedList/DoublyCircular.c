#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* previos;
};
struct node* head=NULL;
void insertHead(int value)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=newnode;
        newnode->previos=newnode;
        head=newnode;
        return;
    }
    newnode->next=head;
    struct node* temp2=head;
    while (temp2->next!=head)
    {
        temp2=temp2->next;
    }
    newnode->previos=temp2;
    temp2->next=newnode;
    head->previos=newnode;
    head=newnode;
}
void insertLast(int val)
{
    struct node* newnode;
    struct node* temp;
    newnode = (struct node* )malloc (sizeof(struct node));
    newnode->data=val;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=head;
    newnode->previos=temp;
    temp->next=newnode;
    head->previos=temp;
}
void search(int num)
{
    struct node* temp=head;
    int i=1;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while ((temp->next)!=head)
    {
        if(temp->data==num){
            printf("%d found at position %d\n",num,i);
            return;
        }
        temp=temp->next;
        i++;
    }
    printf("%d not found\n",num);
}
void printAll()
{
    struct node* temp=head;
    while (temp->next!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}
int main()
{
    insertHead(5);
    insertHead(3);
    insertHead(8);
    insertLast(9);
    printAll();
    search(9);
    return 0;
}