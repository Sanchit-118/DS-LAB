/*Write a program to check if a given expression is correctly parenthesized using stacks*/
                                       /*OR*/
/*WAP to check all the brackets in the given expression is balanced or not (Parenthesis Cheking)*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char stack[100];
    int top = -1,i,flag=0;
    printf("Enter Expression : ");
    scanf("%s",str);
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]=='(')
        {
                                                    //top++;
            stack[++top]=str[i];
        }
        else if(str[i]==']' || str[i]=='}' || str[i]==')')
        {
            if(stack[top]=='[')
            {
                stack[top]=']';
            }
            else if(stack[top]=='{')
            {
                stack[top]='}';
            }
            else
            {
                stack[top]=')';
            }
            if(stack[top]==str[i])
            {
                top--;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1 || top!=-1)
    {
        printf("Expression is Un-Balanced !!!\n");
    }
    else
    {
        printf("Expression is Balanced !!!\n");
    }
    return 0;
}