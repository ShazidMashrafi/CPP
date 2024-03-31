#include<bits/stdc++.h>
using namespace std;

int main()
{
    char info[13]={"  OT  X NIE "};
    int link[13]={-2,-2,5,-1,-2,10,9,-2,2,3,6,-2,-2};
    int start=8;
    int ptr=start;
    while(ptr!=-1)
    {
        cout<<info[ptr];
        ptr=link[ptr];
    }
}