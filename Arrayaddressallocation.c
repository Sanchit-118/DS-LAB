//Program to understand the concept of memory allocation of array using address
#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("%d\t%d",arr+1,&arr+2);
    return 0;
}