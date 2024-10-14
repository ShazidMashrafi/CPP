#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}

int main()
{
    // Vectors can be declared with size also
    // vector<data_type or container> variable_name(size);
    vector<int>v(5); //but in this case all the values will be initialized to 0;
    printVec(v); 

    //Vectors can also be declared with a specific value too;
    // vector<data_type or container> variable_name(size, initial value);
    vector<int>v2(10,3); //but in this case all the values will be initialized to 3;
    printVec(v2);

    //But the size can be changed.
    v2.push_back(4); // this will add 4 to end of the vector;
    printVec(v2);

    //vectors values can be deleted as wel, making their size decrease;
    v2.pop_back(); //This will delete the last value of v2.
    printVec(v2);
}