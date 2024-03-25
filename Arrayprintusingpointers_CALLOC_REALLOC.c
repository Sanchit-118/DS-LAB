//Program to read and display elements of an array using pointers, calloc and realloc function(Dynamic Memory Allocation)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *arr = (int*)calloc(5,sizeof(int));
    printf("Enter the elements : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",arr+i);
    }
    arr = realloc(arr,10*sizeof(int));
    printf("Enter the elements : ");
    for(i=i; i<10; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Array elements are : \n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
}