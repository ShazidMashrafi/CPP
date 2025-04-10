#include<bits/stdc++.h>
using namespace std;

int main()
{
    // [empty]{variable declare}{return value;}
    // () - call using a value;
    cout<<[](int x){return x+2;}(3)<<endl;

    auto sum=[](int x,int y){return x+y;};
    cout<<sum(5,6)<<endl;
}