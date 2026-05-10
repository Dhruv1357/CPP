/*
Problem - Count the number of digits that divide a number
Platform - GeeksForGeeks
Summary -  Write a function to count the number of digits in n that evenly divide n.

*/
#include <iostream>
using namespace std;

int evenlyDivides(int n) 
{
    int count=0,push,num = n;
    vector<int> a;
    
    for(int i=0;num!=0;i++)
    {
        push = num%10;
        num/=10;
        if(push!=0)
        a.push_back(push);
    }
    
    for(int i=0;i<a.size();i++)
    {
        if(n%a[i] == 0)
        count++;
    }
    
    return count;
}

int main()
{
    int num;
    cin>>num;
    cout << evenlyDivides(num);
}