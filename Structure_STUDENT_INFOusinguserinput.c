//Implement a structure to display the data of a single student using user input
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
    struct student s1;
    printf("Enter the Roll number : ");
    scanf("%d",&s1.rollnumber);
    printf("Enter the name : ");
    fflush(stdin);
    scanf("%s",&s1.name);
    printf("Enter the branch : ");
    scanf("%s",&s1.branch);
    printf("Enter the marks : ");
    scanf("%f",&s1.marks);
    printf("Roll number : %d\n",s1.rollnumber);
    printf("Name : %s\n",s1.name);
    printf("Branch : %s\n",s1.branch);
    printf("Marks : %.2f\n",s1.marks);
    return 0;
}