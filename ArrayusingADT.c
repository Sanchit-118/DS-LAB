//Implement a list using array and develop functions to perform insertion, deletion, linear search operations *(Lab Manual EXP-1)
#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize], size;
void create()
{
    int i;
    printf("Enter the size : "); 
    scanf("%d",&size);
    if(size>maxsize)
    {
        printf("List overflow !!!!!\n");
    }
    else
    {
        printf("Enter elements : \n");
        for(i=0; i<size; i++)
        {
            scanf("%d",&list[i]);
        }
    }
}
void displaylist()
{
    int i;
    if(size==0)
    {
        printf("List is empty !!!!!");
    }
    else
    {
        printf("List elements are : \n");
        for(i=0; i<size; i++)
        {
            printf("%d  ",list[i]);
        }
    }
}
void insert()
{
    if(size==0)
    {
        printf("List is empty !!!!\n");
    }
    else
    {
        int pos, value, i;
        printf("Enter the position to insert : ");
        scanf("%d",&pos);
        printf("Enter the value : ");
        scanf("%d",&value);
        if(pos>size)
        {
            printf("Invalid Position !!!!\n");
        }
        else
        {
            for(i=size; i>=pos; i--)
            {
                list[i]=list[i-1];
            }
            list[pos-1]=value;
            size++;
            printf("Element inserted successfully !!!\n");
        }
    }
}
void delete()
{
    if(size==0)
    {
        printf("List is empty !!!!\n");
    }
    else
    {
        int pos, i;
        printf("\nEnter the position to delete : ");
        scanf("%d",&pos);
        for(i=pos-1; i<size; i++)
        {
            list[i]=list[i+1];
        }
        size--;
        printf("Element deleted successfully !!!!\n");
    }
}
void search()
{
    if(size==0)
    {
        printf("List is empty !!!\n");
    }
    else
    {
        int val, i;
        printf("Enter searching value : ");
        scanf("%d",&val);                                              //int flag = 0;
        for(i=0; i<size; i++)
        {
            if(val==list[i])
            {                                                          //printf("Element found !!!\n");
                break;                                                 //flag=1;
            }
        }
        if(i==size)
        {                                                              //if(flag==0)
            printf("Element not found !!!!\n");                        //printf("Element not found !!!!\n");
        }                                                              
        else
        {
            printf("Element found !!!\n");
        }
    }
}
int main()
{
    while(1)
    {
        printf("1. Create list\n");
        printf("2. Inset element in list\n");
        printf("3. Display list\n");
        printf("4. Delete element from a list\n");
        printf("5. Search element in list\n");
        printf("6. Exit\n");
        int choice;
        printf("\n\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            create();
            break;
            case 2:
            insert();
            break;
            case 3:
            displaylist();
            break;
            case 4:
            delete();
            break;
            case 5:
            search();
            break;
            case 6:
            displaylist();
            break;
            case 7:
            exit(0);
            break;
            default:
            printf("Invalid choice !!!!!\n");
        }
        printf("\n\n");
        system("pause");
        system("cls");
    }
}