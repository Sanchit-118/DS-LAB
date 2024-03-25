//Program to read and display elements of an array using pointers
#include<stdio.h>
int main()
{
    int arr[50],size;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0; i<size; i++)
    {
        printf("Elements : %d\t",*(arr+i));
    }
    return 0;
}