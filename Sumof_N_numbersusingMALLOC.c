//Program to perform sum of N numbers using pointer, malloc function, loop using one variable(Less memory consumption)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0,i,p1,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int *p1=(int*)malloc(sizeof(int));
        printf("Enter number : ");
        scanf("%d",p1);
        sum+=*p1;
        free(p1);
    }
    printf("Sum = %d",sum);
    return 0;
}