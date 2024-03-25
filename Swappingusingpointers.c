//Program to perform the swapping of two numbers using pointers(address of variable)
#include<stdio.h>
int main()
{
    int a,b,x;
    int *p1=&a,*p2=&b;
    printf("Enter two numbers");
    scanf("%d%d",p1,p2);
    printf("Before swapping a=%d and b=%d\n",*p1,*p2);
    x=*p1;
    *p1=*p2;
    *p2=x;
    printf("After swapping a=%d and b=%d\n",*p1,*p2);
}