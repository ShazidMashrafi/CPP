// Destructor is a special type of funtion that allows to destroy a class after it's use, thus saving memory
// "~" + class name is destructor.
#include<iostream>
using namespace std;

class Student
{
    public:
        void display()
        {
            cout<< "Display is called"<<endl;
        }

        Student()
        {
            cout<<"Constructor is called"<<endl;
        }
        ~Student() //Doesn't have parameters
        {
            cout<<"Destructor is called"<<endl;
        }
// Destructor will work after all the process of the class is finished. It doesn't matter when it was called.
};

int main()
{
    Student Shazid; //Constructor and destructor both will be called here.
    Shazid.display();

}