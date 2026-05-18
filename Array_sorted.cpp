/*
Problem - Check if array is sorted
Platform - GeeksForGeeks
Summary - Finding if the array is sorted in non decreasing order
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) 
    {

        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1] > arr[i])
                return false;
        }
        
        return true;
    }

    int main()
    {
        vector<int>v;
        
        int size;
        cin >> size;
        int inp;

        for(int i=0;i<size;i++)
        {
            cin >> inp;
            v.push_back(inp);
        }

        cout << isSorted(v);
    }