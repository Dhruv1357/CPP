#include <iostream>
using namespace std;

int distinct(vector<int>& arr) 
{
    sort(arr.begin(),arr.end());
    int count = 1;
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i] != arr[i-1])
            count++;
    }
    return count;
}