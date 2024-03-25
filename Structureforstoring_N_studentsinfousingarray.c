//Implement a structure for storing information of 2 or N students using an array
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
    struct student s1[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter Roll number : ");
        scanf("%d",&s1[i].rollnumber);
        printf("Enter name : ");
        scanf("%s",&s1[i].name);
        printf("Enter branch : ");
        scanf("%s",&s1[i].branch);
        printf("Enter the marks : ");
        scanf("%f",&s1[i].marks);
    }
    printf("\n\n");
    for(int i=0; i<2; i++)
    {
        printf("Roll number : %d\n",s1[i].rollnumber);
        printf("Name : %s\n",s1[i].name);
        printf("Branch : %s\n",s1[i].branch);
        printf("Marks : %.2f\n",s1[i].marks);
    }
    return 0;
}