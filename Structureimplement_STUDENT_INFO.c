//Implement a structure for printing a single student info
#include<stdio.h>
//#pragma pack(1)                  ------ Memory allocation packing of 1 byte each instead of 4 byte
struct student
{                      //REAL MEMORY OCCPUIED         //OPERATING SYSTEM MEMORY CONSIDERATION (Without pragma pack(1))
    int rollnumber;     // 4 bytes                       // 4 bytes              __
    char name[20];      // 20 bytes                      // 20 bytes            |   
    char branch[10];    // 10 bytes                      // 12 bytes            | Memory will be occupied by OS in blocks of 4 bytes
    float marks;        // 4 bytes                       // 4 bytes             |
};        //TOTAL -----------// 38 bytes      //TOTAL ---------// 40 bytes      |__
int main()
{
    struct student s1 = {118,"ANONYMOUS","CSE",476.1};        //size of structure is equal to sum of size of their members
    //printf("Size of s1 = %d",sizeof(s1));
    printf("Roll number = %d\n",s1.rollnumber);
    printf("Name = %s\n",s1.name);
    printf("Branch = %s\n",s1.branch);
    printf("Marks = %.2f\n",s1.marks);
    return 0;
}