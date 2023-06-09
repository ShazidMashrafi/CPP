#include<iostream>
using namespace std;

class Student
{
    public :
        int id;
        double gpa;

        void display()
        {
            cout<< id<< " " << gpa << endl;
        }

        void setvalue(int x, double y)
        {
            id=x;
            gpa=y;
        }
};

int main()
{
    Student Shazid,Mashrafi;
    Shazid.setvalue(101,3.75);
    Shazid.display();

    Mashrafi.setvalue(102,3.25);
    Mashrafi.display();
}