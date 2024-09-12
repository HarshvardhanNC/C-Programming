// structers are similar to array but they can store different data types
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float marks;
    char name[10];
}s1;// s1 is global varaible anyone can access
struct student s4; // same as above and s4 is also global 
int main()
{   
    // s2 and s3 are local to main
    struct student s2={12,40.00,"SARTHAK"},s3;//more structure variables
    s1.roll=16;// " . " IS CALLED STRUCTURE MEMBER OPERATOR
    s1.marks=40.00;
    // you cannot directly assign a string to a character array 
    // using the = operator after the array is initialized.
    strcpy(s1.name,"HARSH");
    printf("ROLL OF FIRST STUDENT IS %d\n",s1.roll);
    printf("MARKS OF FIRST STUDENT IS %f\n",s1.marks);
    printf("ROLL OF FIRST STUDENT IS %s\n",s1.name);
    s3.roll=45;
    printf("%d",s3.roll);
    return 0;
}