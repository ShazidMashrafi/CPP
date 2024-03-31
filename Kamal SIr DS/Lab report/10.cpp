#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start,ptr;
    char key;
    char info[13]={"  OT  X NIE "};
    int link[13]={-2,-2,5,-1,-2,10,9,-2,2,3,6,-2,-2};
    start=8;
    cout<<"\nEnter the key item: ";
    cin>>key;
    ptr=start;
    while(ptr!=-1)
    {
        if(info[ptr]==key)
        {
            cout<<"\nFound at position: "<<ptr+1<<endl;
            return 0;
        }
        ptr=link[ptr];
    }
    cout<<"\nKey not found"<<endl;
}