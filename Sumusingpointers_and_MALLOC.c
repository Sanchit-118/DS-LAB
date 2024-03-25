//Program to perform sum of two variables using pointer and malloc function(Dynamic Memory Allocation)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1 = (int*)malloc(sizeof(int));
    printf("Enter the first number : ");
    scanf("%d",p1);
    int *p2 = (int*)malloc(sizeof(int));
    printf("Enter the second number : ");
    scanf("%d",p2);
    printf("Sum = %d",*p1+*p2);
    free(p1);
    free(p2);
    return 0;
}