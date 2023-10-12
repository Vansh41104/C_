//check balanced brackets
#include<stdio.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char);
char pop();
int main(){
    char str[20], t;
    int f=1, i;
    printf("Enter String: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
    if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        push(str[i]);
    else if(str[i]==')' || str[i]=='}' || str[i]==']')
    {
        if(top==-1)
        f=0;
    else
    {
        t=pop();
        if(str[i]==')' && (t=='{' || t=='['))
        f=0;
        if(str[i]=='}' && (t=='(' || t=='['))
        f=0;
        if(str[i]==']' && (t=='{' || t=='('))
        f=0;
    }
  }
} 
    if(top>=0)
        f=0;
    if(f==1)
        printf("Balanced");
    else
        printf("Not Balanced");
    return 0;
}
    void push(char a)
    {
        stack[++top] = a;
    }
    char pop()
    {
        return stack[top--];
    }