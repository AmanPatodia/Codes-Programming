#include <stdio.h>
struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};

union student
{
    char name[50];
    int id;
    char address[50];
};
int main()
{ 
     printf("-----------------------------------");
     printf("\nName: Tamana Jangra \nRollNo: 21607 \n\n");
     printf("Using Structure: \n");
     struct StudentData student;

     student.stu_name = "Steve";
     student.stu_id = 1234;
     student.stu_age = 30;

     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
    
     printf("\n\nUsing Union: \n");
     union student stu;
     printf("Enter the name of the student: ");
     scanf("%s", &stu.name);
     printf("Enter the id of student: ");
     scanf("%ld", &stu.id);
     printf("Enter the address of the student: ");
     scanf("%s", &stu.address);
    
     
     printf("The name of the student entered is %s\n", stu.name);
     printf("The id of the student entered is %d\n", stu.id);
     printf("The address of the student entered is %s\n", stu.address);
     return 0;
}