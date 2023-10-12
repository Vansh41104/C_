#include <stdio.h>
int main()
{
    int amount, total=0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    if(amount>=500)
    {
        total+=amount/500;
        printf("500 - %d", amount/500);
        amount=amount%500;
    }
    if(amount>=200)
    {
        total+=amount/200;
        printf("\n200 - %d", amount/200);
        amount=amount%200;
    }
    if(amount>=100)
    {
        total+=amount/100;
        printf("\n100 - %d", amount/100);
        amount=amount%100;
    }
    if(amount>=50)
    {
        total+=amount/50;
        printf("\n50 - %d", amount/50);
        amount=amount%50;
    }
    if(amount>=20)
    {
        total+=amount/20;
        printf("\n20 - %d", amount/20);
        amount=amount%20;
    }
    if(amount>=10)
    {
        total+=amount/10;
        printf("\n10 - %d", amount/10);
        amount=amount%10;
    }
    if(amount>=5)
    {
        total+=amount/5;
        printf("\n5 - %d", amount/50);
        amount=amount%5;
    }
    if(amount>=2)
    {
        total+=amount/2;
        printf("\n2 - %d", amount/2);
        amount=amount%2;
    }
    if(amount>=1)
    {
        total+=amount/1;
        printf("\n1 - %d", amount/1);
        amount=amount%1;
    }
    printf("\nTOTAL = %d", total);
    return 0;
}