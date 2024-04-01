// Given a complete binary tree. Now store tree data
// in an array and print all the leaf nodes
#include <iostream>
#include <math.h>
using namespace std;

void LEAF(int tree[], int n, int d)
{
    int m = (int)pow(2, d - 1) - 1;
    for (int i = m; i < n; ++i)
        cout << tree[i] << " ";
}

int main()
{
    int d, n;
    cout << "Enter depth and number of nodes: ";
    cin >> d >> n;
    int tree[n];
    cout << "\nEnter nodes: ";
    for (int i = 0; i < n; ++i)
        cin >> tree[i];
    LEAF(tree, n, d);
}