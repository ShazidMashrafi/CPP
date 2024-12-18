#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "size :" << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v; //every element of v will be a vector
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int>temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); ++i) // will print every vector of v one by one
    {
        printVec(v[i]);
    }
    cout<< v[0][1]; // will print the first value of first vector in v
    v.push_back(vector<int>()); // will add a vector to v
    v[2].push_back(9); // will add 9 to the 3rd vector of v
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i]);
    }
}