//Implement a structure to display the data of two students directly using user input
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
    struct student s2;
    printf("Enter the Roll number of student 1 : ");
    scanf("%d",&s1.rollnumber);
    printf("Enter the name of student 1 : ");
    fflush(stdin);
    scanf("%s",&s1.name);
    printf("Enter the branch of student 1 : ");
    scanf("%s",&s1.branch);
    printf("Enter the marks of student 1 : ");
    scanf("%f",&s1.marks);
    printf("Enter the Roll number of student 2 : ");
    scanf("%d",&s2.rollnumber);
    printf("Enter the name of student 2 : ");
    fflush(stdin);
    scanf("%s",&s2.name);
    printf("Enter the branch of student 2 : ");
    scanf("%s",&s2.branch);
    printf("Enter the marks of student 2 : ");
    scanf("%f",&s2.marks);
    printf("\n\n");
    printf("Roll number of student 1 : %d\n",s1.rollnumber);
    printf("Name of student 1 : %s\n",s1.name);
    printf("Branch of student 1 : %s\n",s1.branch);
    printf("Marks of student 1 : %.2f\n",s1.marks);
    printf("\n\n");
    printf("Roll number of student 2 : %d\n",s2.rollnumber);
    printf("Name of student 2 : %s\n",s2.name);
    printf("Branch of student 2 : %s\n",s2.branch);
    printf("Marks of student 2 : %.2f\n",s2.marks);
    return 0;
}