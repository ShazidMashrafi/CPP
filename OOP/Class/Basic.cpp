#include<iostream>
using namespace std;

class student
{
    public:
        int id;
        float cgpa;
};

int main()
{
    student shazid;
    shazid.id=101;
    shazid.cgpa=3.5;
    cout<<shazid.id<<" "<<shazid.cgpa<<endl;

    student mashrafi;
    mashrafi.id=102;
    mashrafi.cgpa=3.3;
    cout<<mashrafi.id<<" "<<mashrafi.cgpa<<endl;
}