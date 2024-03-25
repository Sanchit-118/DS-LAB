//Implement a stack using array and develop functions to perform push and pop operations *(Lab Manual EXP-2)
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE], top=-1;
int isEmpty()
{
    //if(top==-1)
    //{
    //    return 1;
    //}
    //else
    //return 0;
    return (top==-1) ? 1 : 0;
}
int isFull()
{
    return (top==SIZE-1) ? 1 : 0;
}
int push()
{
    if(isFull())                             //if(isFull()==1)
    {
        printf("Stack Overflow !!!\n");
    }
    else
    {
        top++;
        int value;
        printf("Enter the value : ");
        scanf("%d",&value);
        stack[top]=value;
        printf("Element Added !!!\n");
    }
}
void show()
{
    if(isEmpty())
    {
        printf("Stack is empty !!!\n");
    }
    else
    {
        int i;
        printf("Stack Elements are : \n");
        for(i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void pop()
{
    if(isEmpty())
    {
        printf("Stack Underflow !!!\n");
    }
    else
    {
        int val = stack[top];
        top--;
        printf("Element %d removed from the stack",val);
    }
}
void peek()
{
    if(isEmpty())
    {
        printf("Stack is empty !!!\n");
    }
    else
    {
        printf("Top Element : %d",stack[top]);
    }
}
int main()
{
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
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
            show();
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Invalid Choice !!!\n");
            break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
    }
    return 0;
}