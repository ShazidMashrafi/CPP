#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {29,35000};
    struct Person person2,person3; 

    //elementwise assignment.
    person2.age=27;
    person2.salary=30000;

    //Copying values.
    person3=person2;
    printf("Person 1: \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %.2f\n",person1.salary);

    printf("\nPerson 2: \n");
    printf("Age: %d\n",person2.age);
    printf("Salary: %.2f\n",person2.salary);

    printf("\nPerson 3: \n");
    printf("Age: %d\n",person3.age);
    printf("Salary: %.2f\n",person3.salary);
}