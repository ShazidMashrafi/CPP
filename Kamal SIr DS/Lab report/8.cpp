#include <bits/stdc++.h>
using namespace std;

void DELETE(char info[], int link[], int start)
{
    int ptr = start;
    cout << "\nBefore deleting the first item: ";
    while (ptr != -1)
    {
        cout << info[ptr];
        ptr = link[ptr];
    }

    start = link[start];
    ptr = start;
    cout << "\nAfter deleting the first item: ";
    while (ptr != -1)
    {
        cout << info[ptr];
        ptr = link[ptr];
    }
}

int main()
{
    char info[13] = {"  OT  X NIE "};
    int link[13] = {-2, -2, 5, -1, -2, 10, 9, -2, 2, 3, 6, -2, -2};
    int start = 8;
    DELETE(info,link,start);
}