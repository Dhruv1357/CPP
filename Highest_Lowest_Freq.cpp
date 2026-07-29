/*
Problem - Highest and Lowest Frequencies
Platform - GeeksForGeeks
Summary - Find the difference between the highest occuring elements frequency and lowest occuring elements frequency.
*/

#include<iostream>
using namespace std;

class Solution {
  public:
  
    int findDiff(vector<int>& arr) {

        unordered_map<int, int>um;
        int max = INT_MIN, min = INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(um[arr[i]] > max)
                max = um[arr[i]];
            if(um[arr[i]] < min)
                min = um[arr[i]];
        }
        
        return max - min;
    }
};