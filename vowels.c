#include <stdio.h>
int main()
{
    char a[] = "A clever fox jumps over a lazy dog";

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='A')
        {
            a[i]='1';
        }
        else if(a[i]=='e'||a[i]=='E')
        {
            a[i]='2';
        }
        else if(a[i]=='i'||a[i]=='I')
        {
            a[i]='3';
        }
        else if(a[i]=='o'||a[i]=='O')
        {
            a[i]='4';
        }
        else if(a[i]=='u'||a[i]=='U')
        {
            a[i]='5';
        }
    }
    puts(a);

    return 0;
}