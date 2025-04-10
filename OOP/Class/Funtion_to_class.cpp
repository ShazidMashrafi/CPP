#include<iostream>
using namespace std;
class Student
{
    public :
        int id;
        double gpa;

        void display()
        {
            cout<< id << " " << gpa << endl;
        }
};

int main()
{
    Student Shazid,Mashrafi;

    Shazid.id = 10;
    Shazid.gpa = 3.50;
    Shazid.display();

    Mashrafi.id=11;
    Mashrafi.gpa=3.45;
    Mashrafi.display();
}