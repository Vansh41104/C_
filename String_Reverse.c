#include<stdio.h>
int main()
{
    int stack[50];
    char str[100];
    int top = -1;
    int i = 0;
    printf("Enter string :- ");
    gets(str);
    while(str[i]!='\0')
    {
        top++;
        stack[top] = str[i];
        i++;
    }
    i = top;
    while(i != -1)
    {
        printf("%c",stack[i]);
        i--;
    }
}
