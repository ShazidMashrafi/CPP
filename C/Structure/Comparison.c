#include<stdio.h>
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person1,person2,person3;
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
    person3=person2;

    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("\nPerson 1 is to equal Person 2\n");
    else printf("\nPerson 1 is not equalt to Person 2\n");
    
    if(person2.age==person3.age && person2.salary==person3.salary)
        printf("\nPerson 2 is equal to Person 3\n");
    else printf("\nPerson 2 is not equalt to Person 3\n");
}