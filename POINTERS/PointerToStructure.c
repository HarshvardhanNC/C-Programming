#include<stdio.h>
struct Student
{
    int roll;
    char name[20];
};
struct Student s1={16,"HARSH"};
int main()
{
    struct Student* ptr=&s1;
    printf("ROLL OF FIRST STUDENT IS %d\n",s1.roll);
    printf("ROLL OF FIRST STUDENT IS %d\n",(*ptr).roll);// *ptr = s1 
    printf("ROLL OF FIRST STUDENT IS %d",ptr->roll); 
    //     Why -> Instead of .?
// If you have a pointer to a structure, you use the -> operator to access the members.
// The -> operator is essentially a shorthand for (*pointer).member. 
// For example, head->data is equivalent to (*head).data.
    return 0;
}