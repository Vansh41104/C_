#include <iostream>
using namespace std;

#define MAX 50
int top = -1;
int stack[MAX];

void push();
void pop();
void peek();
void display();

int main()
{
    int ch;
    while(1)
    {
    cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
    cin>>ch;
    cout<<"\n";
    
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid choice!\n";
        }
    }
    return 0;
}

void push()
{
    if(top==(MAX-1))
    {
        cout<<"OVERFLOW!\n";
    }
    else
    {
        top++;
        cout<<"Enter a new element: ";
        cin>>stack[top];
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"UNDERFLOW!\n";
    }
    else
    {
        cout<<stack[top]<<" has been popped out!\n";
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        cout<<"UNDERFLOW!\n";
    }
    else
    {
        cout<<stack[top]<<" is on top of the stack!\n";
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"UNDERFLOW!\n";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<"\n";
        }
    }   
}



