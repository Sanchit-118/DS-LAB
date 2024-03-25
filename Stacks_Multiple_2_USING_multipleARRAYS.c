#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack1[SIZE], top1=-1;
int stack2[SIZE], top2=-1;
void push1()
{
    if(top1==SIZE-1)
    printf("Stack-1 Overflow !!!\n");
    else
    {
        top1++;
        int value;
        printf("Enter the value : ");
        scanf("%d",&value);
        stack1[top1]=value;
        printf("Element Added in Stack-1 !!!\n");
    }
}
void push2()
{
    if(top2==SIZE-1)
    printf("Stack-2 Overflow !!!\n");
    else
    {
        top2++;
        int value;
        printf("Enter the value : ");
        scanf("%d",&value);
        stack2[top2]=value;
        printf("Element Added in Stack-2 !!!\n");
    }
}
void show1()
{
    if(top1==-1)
    printf("Stack-1 is empty !!!\n");
    else
    {
        int i;
        printf("Stack-1 Elements are : \n");
        for(i=top1; i>=0; i--)
        {
            printf("%d\n",stack1[i]);
        }
    }
}
void show2()
{
    if(top2==-1)
    printf("Stack-2 is empty !!!\n");
    else
    {
        int i;
        printf("Stack-2 Elements are : \n");
        for(i=top2; i>=0; i--)
        {
            printf("%d\n",stack2[i]);
        }
    }
}
void pop1()
{
    if(top1==-1)
    printf("Stack-1 Underflow !!!\n");
    else
    {
        int val = stack1[top1];
        top1--;
        printf("Element %d removed from the Stack-1",val);
    }
}
void pop2()
{
    if(top2==-1)
    printf("Stack-2 Underflow !!!\n");
    else
    {
        int val = stack2[top2];
        top2--;
        printf("Element %d removed from the Stack-2",val);
    }
}
void peek1()
{
    if(top1==-1)
    printf("Stack-1 is empty !!!\n");
    else
    printf("Top Element in Stack-1 : %d",stack1[top1]);
}
void peek2()
{
    if(top2==-1)
    printf("Stack-2 is empty !!!\n");
    else
    printf("Top Element in Stack-2 : %d",stack2[top2]);
}
int main()
{
    while(1)
    {
        system("cls");
        printf("1. Push Data in Stack-1\n");
        printf("2. Push Data in Stack-2\n");
        printf("3. Pop Data from Stack-1\n");
        printf("4. Pop Data from Stack-2\n");
        printf("5. Peek Data from Stack-1\n");
        printf("6. Peek Data from Stack-2\n");
        printf("7. Show Data of Stack-1\n");
        printf("8. Show Data of Stack-2\n");
        printf("9. Exit\n");
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push1();
            break;
            case 2:
            push2();
            break;
            case 3:
            pop1();
            break;
            case 4:
            pop2();
            break;
            case 5:
            peek1();
            break;
            case 6:
            peek2();
            break;
            case 7:
            show1();
            break;
            case 8:
            show2();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Invalid Choice !!!!\n");
            break;
        }
        printf("\n\n");
        system("pause");
    }
    return 0;
}