//Implement a structure pointer for printing a single student info
#include<stdio.h>
struct student
{
    int rollnumber;
    char name[15];
    char branch[10];
    float marks;
};
int main()
{
    struct student s1, *ptr;
    ptr=&s1;
    printf("Enter Roll number : ");
    scanf("%d",&ptr->rollnumber);
    printf("Enter the Name : ");
    fflush(stdin);
    scanf("%s",ptr->name);
    printf("Enter the Branch : ");
    scanf("%s",ptr->branch);
    printf("Enter the marks : ");
    scanf("%f",&ptr->marks);
    printf("Roll number = %d\n",ptr->rollnumber);
    printf("Name = %s\n",ptr->name);
    printf("Branch = %s\n",ptr->branch);
    printf("Marks = %.2f\n",ptr->marks);
}