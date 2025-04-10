#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair <int,string> p;
    p = {1,"abc"};
    cout<<"First pair"<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    pair <int,string> p2 = p; // p2 will receive a copy of p
    cout<<"After copying pair 1 to pair 2"<<endl;
    cout<<"First pair"<<endl;
    cout<< p.first<<" "<<p.second<<endl;
    cout<<"Second pair"<<endl; 
    cout<< p2.first<<" "<<p2.second<<endl; 

    p2.first=2;
    cout<<"After changing the first value of pair 2"<<endl;
    cout<<"First pair"<<endl;
    cout<< p.first<<" "<<p.second<<endl;
    cout<<"Second pair"<<endl; 
    cout<< p2.first<<" "<<p2.second<<endl; 

    pair<int,string>&p3=p; // p3 will reference p
    cout<<"After copying pair 1 with reference to pair 3"<<endl;
    cout<<"First pair"<<endl;
    cout<< p.first<<" "<<p.second<<endl;
    cout<<"Third pair"<<endl; 
    cout<< p3.first<<" "<<p3.second<<endl;  

    p3.first=3;
    cout<<"After changing the first value of pair 3"<<endl;
    cout<<"First pair"<<endl;
    cout<< p.first<<" "<<p.second<<endl;
    cout<<"Third pair"<<endl; 
    cout<< p3.first<<" "<<p3.second<<endl;  
}