// References are not objects. Instead they are a different name for an existing object
// References can be used instead of pointers in c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=5,n;
    cout<<"First value of x+ "<<x<<endl;
    n=x; // A copy of x is passed to n
    n++; // Changes of n doesn't effect x
    cout<<"Value of n = "<<n<<endl; // value of n was incremented in previous line
    cout<<"Value of x = "<<x<<endl; // value of x unchanged
    int &m=x; // m references x
    m++; // changes to m will have effect on x
    cout<<"Value of m = "<<m<<endl; // value of m was incremented in previous line
    cout<<"Value of x = "<<x<<endl; // value of x changed

    x=10;
    cout<<"New value of x = "<<x<<endl; // value of x changed to 10 in previous line 
    cout<<"New value of m = "<<m<<endl; // value of m will change due to change in value of x

    // References must be initialized at declaration
    // cannot be used like this
    // int x;
    // int &y; // isn't initialized at declaration
    // y=z; // can't assign a reference to an object after declaration
    // Instead it needs to be used to like this
    // int &z=x;  //Correct use of reference
    // References cannot be directly assigned to a value like this
    // int &z=10    // It always needs an object first
    // There is no way to rebind a reference to another object, so it needs to be initialized at declaration
    // int a,b,x;
    // int &c=a, &d=b; //Multiple references declared and initialized at the same time 
    // &c=x //can't be done because c is already referencing a
    // Reference and object needs to the same type
    // double d=3.14;
    // int &x=d; // error, reference and object is not the same type
    // double &x=d //ok, reference and object is the same type
}