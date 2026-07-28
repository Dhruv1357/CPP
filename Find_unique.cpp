/*
Problem - Find Unique Element
Platform - GeeksForGeeks
Summary - Every element is occuring in multiple of k, except for one element, find that element
*/

#include<iostream>
using namespace std;

class Solution {
  public:

    int findUnique(int k, vector<int>& arr) 
    {
        unordered_map<int,int>um;
        
        for(int i=0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(um[arr[i]] != k)
                return arr[i];
        }
        
    }
};