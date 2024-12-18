#include<stdio.h>
//A structure declared outside main function is called global structure.Any function can use it.
struct Person
{
    int age;
    float salary;
};

//Global variable
/*
struct Person person1,person2;
*/

int main()
{
    //Local structure
    /*
    struct Person
    {
        int age;
        float salary;
    };
    */
    struct Person person1,person2; //Local variable 
    printf("Enter information for person 1:\n");
    printf("Enter age: ");
    scanf("%d",&person1.age);
    printf("Enter Salary: ");
    scanf("%f",&person1.salary);
    
    printf("Enter information for person 2:\n");
    printf("Enter age: ");
    scanf("%d",&person2.age);
    printf("Enter Salary: ");
    scanf("%f",&person2.salary);

    printf("\n\nPerson 1: \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %.2f\n",person1.salary);
    printf("\nPerson 2: \n");
    printf("Age: %d\n",person2.age);
    printf("Salary: %.2f\n",person2.salary);
}