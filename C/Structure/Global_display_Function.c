#include<stdio.h>
struct Person
{
    char name[20];
    int age;
    float salary;
};
void display(struct Person p)
{
    printf("\nName: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %.2f\n",p.salary);
}
int main()
{
    struct Person person1,person2;
    strcpy(person1.name,"Shazid Mashrafi");
    person1.age= 20;
    person1.salary= 20000;
    display(person1);

    strcpy(person2.name,"No one");
    person2.age= 30;
    person2.salary= 25000;
    display(person2);
}