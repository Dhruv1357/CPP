/*
Problem - Array insert at index
Platform - GeeksForGeeks
Summary - We are given an array arr(0-based index) and two positive integer index and val. 
          We need to insert an val at given index.
*/

#include <iostream>
#include <vector>
using namespace std;

void insertAtIndex(vector<int> &arr, int index, int val) 
    {
        // code here
        arr.push_back(arr[arr.size() - 1]);
        for(int i=arr.size() - 2;i>=index;i--)
        {
            if(i > index)
                arr[i] = arr[i-1];
            if(i == index)
                arr[i] = val;
        }
        if(index == arr.size() - 1)
            arr[arr.size() - 1] = val;
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
        
        int index,val;

        cin >> index >> val;

        insertAtIndex(v,index,val);
    }