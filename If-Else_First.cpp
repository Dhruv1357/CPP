/*
Problem - If-Else First
Summary - Trying if-else for the first time in C++
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    cin>>a>>b;

    if(a>b)
    {
        cout<<"a: "<<a<<" is greater";
    }
    else if(b>a)
    {
        cout<<"b: "<<b<<" is greater";
    }
    else
    {
        cout<<"Both are equal.";
    }
    return 0;
}