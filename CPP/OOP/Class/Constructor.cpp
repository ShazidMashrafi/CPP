//Constractor is a special type of function that is used to initialize the object.
//Doesn't need to be called.
#include<iostream>
using namespace std;

class Student
{
    public :
        int id;
        double gpa;

        void display()
        {
            cout<< id << " " << gpa<<endl;
        }
        Student(int x, double y) //Needs to be same name as class name, no return type.
        {
            id=x;
            gpa=y;
        }
};

int main()
{
    Student Shazid(101,3.50);
    Shazid.display();

    Student Mashrafi(102,3.25);
    Mashrafi.display();
}